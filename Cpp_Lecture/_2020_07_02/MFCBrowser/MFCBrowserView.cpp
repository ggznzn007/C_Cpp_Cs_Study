// 이 MFC 샘플 소스 코드는 MFC Microsoft Office Fluent 사용자 인터페이스("Fluent UI")를
// 사용하는 방법을 보여 주며, MFC C++ 라이브러리 소프트웨어에 포함된
// Microsoft Foundation Classes Reference 및 관련 전자 문서에 대해
// 추가적으로 제공되는 내용입니다.
// Fluent UI를 복사, 사용 또는 배포하는 데 대한 사용 약관은 별도로 제공됩니다.
// Fluent UI 라이선싱 프로그램에 대한 자세한 내용은
// https://go.microsoft.com/fwlink/?LinkId=238214.
//
// Copyright (C) Microsoft Corporation
// All rights reserved.

// MFCBrowserView.cpp: CMFCBrowserView 클래스의 구현
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "MFCBrowser.h"
#endif

#include "MFCBrowserDoc.h"
#include "MFCBrowserView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCBrowserView

IMPLEMENT_DYNCREATE(CMFCBrowserView, CHtmlView)

BEGIN_MESSAGE_MAP(CMFCBrowserView, CHtmlView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CHtmlView::OnFilePrint)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CMFCBrowserView 생성/소멸

CMFCBrowserView::CMFCBrowserView() noexcept
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CMFCBrowserView::~CMFCBrowserView()
{
}

BOOL CMFCBrowserView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CHtmlView::PreCreateWindow(cs);
}

void CMFCBrowserView::OnInitialUpdate()
{
	CHtmlView::OnInitialUpdate();

	Navigate(_T("https://www.naver.com"));
}


// CMFCBrowserView 인쇄


void CMFCBrowserView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}


void CMFCBrowserView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CMFCBrowserView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CMFCBrowserView 진단

#ifdef _DEBUG
void CMFCBrowserView::AssertValid() const
{
	CHtmlView::AssertValid();
}

void CMFCBrowserView::Dump(CDumpContext& dc) const
{
	CHtmlView::Dump(dc);
}

CMFCBrowserDoc* CMFCBrowserView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCBrowserDoc)));
	return (CMFCBrowserDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFCBrowserView 메시지 처리기
