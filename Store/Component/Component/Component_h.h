/* Header file automatically generated from Component.idl */
/*
 * File built with Microsoft(R) MIDLRT Compiler Engine Version 10.00.0214 
 */

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /*COM_NO_WINDOWS_H*/
#ifndef __Component_h_h__
#define __Component_h_h__
#ifndef __Component_h_p_h__
#define __Component_h_p_h__


#pragma once

#pragma push_macro("MIDL_CONST_ID")
#undef MIDL_CONST_ID
#define MIDL_CONST_ID const __declspec(selectany)


//  API Contract Inclusion Definitions
#if !defined(SPECIFIC_API_CONTRACT_DEFINITIONS)
#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0x60000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)
#define WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

#if !defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)
#define WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "Windows.Foundation.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_Component_CIButton_FWD_DEFINED__
#define ____x_Component_CIButton_FWD_DEFINED__

namespace Component {
    interface IButton;
} /* Component */
#define __x_Component_CIButton Component::IButton

#endif // ____x_Component_CIButton_FWD_DEFINED__

#ifndef ____x_Component_CIButton2_FWD_DEFINED__
#define ____x_Component_CIButton2_FWD_DEFINED__

namespace Component {
    interface IButton2;
} /* Component */
#define __x_Component_CIButton2 Component::IButton2

#endif // ____x_Component_CIButton2_FWD_DEFINED__



namespace Component {
    class Button;
} /* Component */



/*
 *
 * Interface Component.IButton
 *
 * Interface is a part of the implementation of type Component.Button
 *
 *
 */
#if !defined(____x_Component_CIButton_INTERFACE_DEFINED__)
#define ____x_Component_CIButton_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_IButton[] = L"Component.IButton";

namespace Component {
    /* [object, exclusiveto, uuid("461c8806-8bc2-4622-8eac-b547c39f867e"), version] */
    MIDL_INTERFACE("461c8806-8bc2-4622-8eac-b547c39f867e")
    IButton : public IInspectable
    {
    public:
        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Text(
            /* [retval, out] */HSTRING * value
            ) = 0;
        
    };

    extern MIDL_CONST_ID IID & IID_IButton=_uuidof(IButton);
    
} /* Component */

EXTERN_C const IID IID___x_Component_CIButton;
#endif /* !defined(____x_Component_CIButton_INTERFACE_DEFINED__) */


/*
 *
 * Interface Component.IButton2
 *
 * Interface is a part of the implementation of type Component.Button
 *
 *
 */
#if !defined(____x_Component_CIButton2_INTERFACE_DEFINED__)
#define ____x_Component_CIButton2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_IButton2[] = L"Component.IButton2";

namespace Component {
    /* [object, exclusiveto, uuid("d3235252-4081-4cc8-b0e0-8c7691813845"), version] */
    MIDL_INTERFACE("d3235252-4081-4cc8-b0e0-8c7691813845")
    IButton2 : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Show(void) = 0;
        
    };

    extern MIDL_CONST_ID IID & IID_IButton2=_uuidof(IButton2);
    
} /* Component */

EXTERN_C const IID IID___x_Component_CIButton2;
#endif /* !defined(____x_Component_CIButton2_INTERFACE_DEFINED__) */


/*
 *
 * Class Component.Button
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Component.IButton ** Default Interface **
 *    Component.IButton2
 *    Windows.Foundation.IStringable
 *
 */

#ifndef RUNTIMECLASS_Component_Button_DEFINED
#define RUNTIMECLASS_Component_Button_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Component_Button[] = L"Component.Button";
#endif


#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_Component_CIButton_FWD_DEFINED__
#define ____x_Component_CIButton_FWD_DEFINED__
typedef interface __x_Component_CIButton __x_Component_CIButton;

#endif // ____x_Component_CIButton_FWD_DEFINED__

#ifndef ____x_Component_CIButton2_FWD_DEFINED__
#define ____x_Component_CIButton2_FWD_DEFINED__
typedef interface __x_Component_CIButton2 __x_Component_CIButton2;

#endif // ____x_Component_CIButton2_FWD_DEFINED__



/*
 *
 * Interface Component.IButton
 *
 * Interface is a part of the implementation of type Component.Button
 *
 *
 */
#if !defined(____x_Component_CIButton_INTERFACE_DEFINED__)
#define ____x_Component_CIButton_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_IButton[] = L"Component.IButton";
/* [object, exclusiveto, uuid("461c8806-8bc2-4622-8eac-b547c39f867e"), version] */
typedef struct __x_Component_CIButtonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Component_CIButton * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Component_CIButton * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Component_CIButton * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Component_CIButton * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Component_CIButton * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Component_CIButton * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_Component_CIButton * This,
        /* [retval, out] */HSTRING * value
        );
    END_INTERFACE
    
} __x_Component_CIButtonVtbl;

interface __x_Component_CIButton
{
    CONST_VTBL struct __x_Component_CIButtonVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Component_CIButton_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Component_CIButton_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Component_CIButton_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Component_CIButton_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Component_CIButton_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Component_CIButton_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Component_CIButton_get_Text(This,value) \
    ( (This)->lpVtbl->get_Text(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Component_CIButton;
#endif /* !defined(____x_Component_CIButton_INTERFACE_DEFINED__) */


/*
 *
 * Interface Component.IButton2
 *
 * Interface is a part of the implementation of type Component.Button
 *
 *
 */
#if !defined(____x_Component_CIButton2_INTERFACE_DEFINED__)
#define ____x_Component_CIButton2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Component_IButton2[] = L"Component.IButton2";
/* [object, exclusiveto, uuid("d3235252-4081-4cc8-b0e0-8c7691813845"), version] */
typedef struct __x_Component_CIButton2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Component_CIButton2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Component_CIButton2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Component_CIButton2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Component_CIButton2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Component_CIButton2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Component_CIButton2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Show )(
        __x_Component_CIButton2 * This
        );
    END_INTERFACE
    
} __x_Component_CIButton2Vtbl;

interface __x_Component_CIButton2
{
    CONST_VTBL struct __x_Component_CIButton2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Component_CIButton2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Component_CIButton2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Component_CIButton2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Component_CIButton2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Component_CIButton2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Component_CIButton2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Component_CIButton2_Show(This) \
    ( (This)->lpVtbl->Show(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Component_CIButton2;
#endif /* !defined(____x_Component_CIButton2_INTERFACE_DEFINED__) */


/*
 *
 * Class Component.Button
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Component.IButton ** Default Interface **
 *    Component.IButton2
 *    Windows.Foundation.IStringable
 *
 */

#ifndef RUNTIMECLASS_Component_Button_DEFINED
#define RUNTIMECLASS_Component_Button_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Component_Button[] = L"Component.Button";
#endif


#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __Component_h_p_h__

#endif // __Component_h_h__
