/* f_0x1025dd40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1025dd40(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_804;
    uint32_t loc_808;
    uint32_t loc_80c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 2104u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1025dd53u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_1025dd53;
    case 0x1025dd5du: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_1025dd5d;
    case 0x1025dd79u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025dd79;
    case 0x1025dd80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_808 = rd32(sp0 - 0x808u); goto E_1025dd80;
    case 0x1025dd88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_808 = rd32(sp0 - 0x808u); goto E_1025dd88;
    case 0x1025dd89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_808 = rd32(sp0 - 0x808u); goto E_1025dd89;
    case 0x1025dd91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025dd91;
    case 0x1025dd98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025dd98;
    case 0x1025dd9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_808 = rd32(sp0 - 0x808u); goto E_1025dd9c;
    case 0x1025dda1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_808 = rd32(sp0 - 0x808u); goto E_1025dda1;
    case 0x1025ddbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_808 = rd32(sp0 - 0x808u); goto E_1025ddbb;
    case 0x1025ddd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_808 = rd32(sp0 - 0x808u); goto E_1025ddd4;
    case 0x1025dde8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_808 = rd32(sp0 - 0x808u); goto E_1025dde8;
    case 0x1025ddf5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_80c = rd32(sp0 - 0x80cu); loc_808 = rd32(sp0 - 0x808u); loc_804 = rd32(sp0 - 0x804u); goto E_1025ddf5;
    case 0x1025ddfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025ddfd;
    case 0x1025de0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025de0f;
    case 0x1025de3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025de3d;
    case 0x1025de62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_80c = rd32(sp0 - 0x80cu); goto E_1025de62;
    case 0x1025de6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_80c = rd32(sp0 - 0x80cu); loc_808 = rd32(sp0 - 0x808u); goto E_1025de6a;
    case 0x1025de72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025de72;
    case 0x1025de82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025de82;
    case 0x1025deceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025dece;
    default: break;
    }
#endif

    COW_AT(1025dd40)
    eax = arg1;
    ecx = self;
L_1025dd53: ;
    COW_AT(1025dd53)
    t1 = rd8(eax);
    wr8(eax + sp0 - arg1 - 0x400u, (uint8_t)t1);
    if ((uint8_t)t1 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t1;
        goto L_1025dd53;
    }
    ecx = (ecx & 0xffffff00u) | t1;
    COW_AT(1025dd5d)
    wr32(sp0 - 0x810u, in_ebx);
    wr32(sp0 - 0x814u, in_ebp);
    wr32(sp0 - 0x818u, in_esi);
    wr32(sp0 - 0x81cu, in_edi);
    wr32(sp0 - 0x820u, 0xau);
    wr32(sp0 - 0x824u, sp0 - 0x400u);
    wr32(sp0 - 0x808u, 1u);
    g->eax = sp0 - 0x400u;
    g->edx = sp0 - 0x400u - arg1;
    g->esp = sp0 - 0x818u;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x10315210u), ecx, 3, sp0 - 0x400u, 0xau, in_edi);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
    COW_AT(1025dd79)
    if (eax == 0u)
    {
        ebx = 1u;
        loc_808 = 1u;
        goto L_1025dd9c;
    }
    ebx = 1u;
L_1025dd80: ;
    COW_AT(1025dd80)
    if (rd8(eax + 1u) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        eax = eax + 1u;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        eax = eax + 1u;
    COW_AT(1025dd88)
        ebx = ebx + 1u;
    }
    COW_AT(1025dd89)
    wr32(sp0 - 0x820u, 0xau);
    wr32(sp0 - 0x824u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x818u;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x10315210u), ecx, 3, eax, 0xau, rd32(sp0 - 0x81cu));
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    COW_AT(1025dd91)
    if (eax != 0u) goto L_1025dd80;
    COW_AT(1025dd98)
    wr32(sp0 - 0x808u, ebx);
    loc_808 = ebx;
L_1025dd9c: ;
    COW_AT(1025dd9c)
    if (ebx <= 0x1fu)
    {
    COW_AT(1025dda1)
        eax = COW_IMG(0x10678e68u) - ebx * 0x810u;
        edx = COW_IMG(0x10678e68u);
        ebp = 0x20u - ebx;
L_1025ddbb: ;
    COW_AT(1025ddbb)
        esi = eax;
        edi = edx;
        ecx = 0x204u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        if (ebp != 1u)
        {
            eax = eax - 0x810u;
            edx = edx - 0x810u;
            ebp = ebp - 1u;
            goto L_1025ddbb;
        }
        edx = edx - 0x810u;
    }
    COW_AT(1025ddd4)
    if (ebx == 1u)
    {
        eax = ebx - 1u;
        esi = 0u;
        edi = sp0 - 0x400u;
    }
    else
    {
        eax = ebx - 1u;
    COW_AT(1025dde8)
        wr32(sp0 - 0x80cu, eax);
        wr32(sp0 - 0x804u, eax);
        esi = COW_IMG(0x10669488u);
        edi = sp0 - 0x400u;
        loc_80c = eax;
        loc_804 = eax;
L_1025ddf5: ;
    COW_AT(1025ddf5)
        wr32(sp0 - 0x820u, 0xau);
        wr32(sp0 - 0x824u, edi);
        g->eax = eax;
        g->esp = sp0 - 0x818u;
        t8 = cow_thiscall_cdecl(g, COW_IMG(0x10315210u), ecx, 3, edi, 0xau, rd32(sp0 - 0x81cu));
        t9 = g->ecx;
        eax = t8;
        ecx = t9;
    COW_AT(1025ddfd)
        wr32(sp0 - 0x828u, eax - edi);
        wr32(sp0 - 0x82cu, edi);
        wr32(sp0 - 0x830u, sp0 - 0x800u);
        g->edx = sp0 - 0x800u;
        g->esp = sp0 - 0x824u;
        cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, sp0 - 0x800u, edi, eax - edi);
        t10 = g->edx;
        edx = t10;
        ebx = eax;
        ebp = eax - edi;
    COW_AT(1025de0f)
        edi = esi;
        eax = 0u;
        ecx = 0x200u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x820u, 0x400u);
        wr32(sp0 - 0x824u, esi);
        wr32(sp0 - 0x828u, ebp);
        wr32(sp0 - 0x82cu, sp0 - 0x800u);
        wr32(sp0 - 0x830u, 0u);
        wr32(sp0 - 0x834u, 0u);
        wr8(ebp + sp0 - 0x800u, 0u);
        wr8(ebp + sp0 - 0x7ffu, 0u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x81cu;
        cow_stdcall(g, rd32(COW_IMG(0x10329144u)), 6, 0u, 0u, sp0 - 0x800u, ebp, esi, 0x400u);   /* kernel32.dll!MultiByteToWideChar */
        t11 = g->ecx;
        t12 = g->edx;
        ecx = t11;
        edx = t12;
    COW_AT(1025de3d)
        wr32(esi - 4u, 0xffu);
        wr32(esi - 0x10u, 0xffu);
        wr32(esi - 0xcu, 0xffu);
        wr32(esi - 8u, 0xffu);
        t13 = rd32(sp0 - 0x80cu) - 1u;
        t14 = rd32(sp0 - 0x80cu);
        wr32(sp0 - 0x80cu, t13);
        if (t14 != 1u)
        {
            eax = t13;
            esi = esi + 0x810u;
            edi = ebx + 1u;
            loc_808 = rd32(sp0 - 0x808u);
            loc_80c = t13;
            loc_804 = rd32(sp0 - 0x804u);
            goto L_1025ddf5;
        }
        eax = t13;
        edi = ebx + 1u;
    COW_AT(1025de62)
        ebx = rd32(sp0 - 0x808u);
        esi = rd32(sp0 - 0x804u);
    }
    COW_AT(1025de6a)
    wr32(sp0 - 0x820u, 0u);
    wr32(sp0 - 0x824u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x818u;
    t15 = cow_thiscall_cdecl(g, COW_IMG(0x10315210u), ecx, 3, edi, 0u, rd32(sp0 - 0x81cu));
    t16 = g->edx;
    eax = t15;
    edx = t16;
    COW_AT(1025de72)
    wr32(sp0 - 0x828u, eax - edi);
    wr32(sp0 - 0x82cu, edi);
    wr32(sp0 - 0x830u, sp0 - 0x800u);
    g->esp = sp0 - 0x824u;
    cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, sp0 - 0x800u, edi, eax - edi);
    ebp = eax - edi;
    COW_AT(1025de82)
    wr32(sp0 - 0x820u, 0x400u);
    edi = COW_IMG(0x10669488u) + esi * 0x810u;
    eax = 0u;
    ecx = 0x200u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t17 = COW_IMG(0x10668c78u) + ebx * 0x810u;
    wr32(sp0 - 0x824u, t17);
    wr32(sp0 - 0x828u, ebp);
    wr32(sp0 - 0x82cu, sp0 - 0x800u);
    wr32(sp0 - 0x830u, 0u);
    wr32(sp0 - 0x834u, 0u);
    wr8(ebp + sp0 - 0x800u, 0u);
    wr8(ebp + sp0 - 0x7ffu, 0u);
    g->edx = t17;
    g->esp = sp0 - 0x81cu;
    cow_stdcall(g, rd32(COW_IMG(0x10329144u)), 6, 0u, 0u, sp0 - 0x800u, ebp, t17, 0x400u);   /* kernel32.dll!MultiByteToWideChar */
    t18 = g->edx;
    edx = t18;
    esi = ebx * 0x810u;
    COW_AT(1025dece)
    t19 = rd32(sp0 - 0x81cu);
    wr32(COW_IMG(0x10668c74u) + esi, 0xffu);
    wr32(COW_IMG(0x10668c68u) + esi, 0xffu);
    wr32(COW_IMG(0x10668c6cu) + esi, 0xffu);
    wr32(COW_IMG(0x10668c70u) + esi, 0xffu);
    g->ebx = rd32(sp0 - 0x810u);
    g->esi = rd32(sp0 - 0x818u);
    g->edi = t19;
    g->ebp = rd32(sp0 - 0x814u);
    g->edx = edx;
    return 0xffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1025dd40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1025dd53u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x80cu;
        g->edx = sp0 - 0x400u - arg1;
        (void)sp0;
        return 1;
    }
    case 0x1025dd5du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x80cu;
        g->edx = sp0 - 0x400u - arg1;
        (void)sp0;
        return 1;
    }
    case 0x1025dd79u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x824u;
        g->ebx = 1u;
        wr32(sp0 - 0x824u, sp0 - 0x400u);
        wr32(sp0 - 0x808u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x1025dd80u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_808;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_808 = rd32(sp0 - 0x808u);
        g->esp = sp0 - 0x81cu;
        (void)sp0;
        return 1;
    }
    case 0x1025dd88u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_808;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_808 = rd32(sp0 - 0x808u);
        g->esp = sp0 - 0x81cu;
        (void)sp0;
        return 1;
    }
    case 0x1025dd89u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_808;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_808 = rd32(sp0 - 0x808u);
        g->esp = sp0 - 0x81cu;
        (void)sp0;
        return 1;
    }
    case 0x1025dd91u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x824u;
        (void)sp0;
        return 1;
    }
    case 0x1025dd98u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x81cu;
        (void)sp0;
        return 1;
    }
    case 0x1025dd9cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_808;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_808 = rd32(sp0 - 0x808u);
        g->esp = sp0 - 0x81cu;
        (void)sp0;
        return 1;
    }
    case 0x1025dda1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_808;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_808 = rd32(sp0 - 0x808u);
        g->esp = sp0 - 0x81cu;
        (void)sp0;
        return 1;
    }
    case 0x1025ddbbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_808;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_808 = rd32(sp0 - 0x808u);
        g->esp = sp0 - 0x81cu;
        (void)sp0;
        return 1;
    }
    case 0x1025ddd4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_808;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_808 = rd32(sp0 - 0x808u);
        g->esp = sp0 - 0x81cu;
        (void)sp0;
        return 1;
    }
    case 0x1025dde8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_808;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_808 = rd32(sp0 - 0x808u);
        g->esp = sp0 - 0x81cu;
        g->edi = sp0 - 0x400u;
        (void)sp0;
        return 1;
    }
    case 0x1025ddf5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_804;
        uint32_t loc_808;
        uint32_t loc_80c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_80c = rd32(sp0 - 0x80cu);
        loc_808 = rd32(sp0 - 0x808u);
        loc_804 = rd32(sp0 - 0x804u);
        g->esp = sp0 - 0x81cu;
        (void)sp0;
        return 1;
    }
    case 0x1025ddfdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x824u;
        (void)sp0;
        return 1;
    }
    case 0x1025de0fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x830u;
        wr32(sp0 - 0x830u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x1025de3du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x81cu;
        wr32(sp0 - 0x82cu, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x1025de62u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_80c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_80c = rd32(sp0 - 0x80cu);
        g->esp = sp0 - 0x81cu;
        wr32(sp0 - 0x82cu, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x1025de6au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_808;
        uint32_t loc_80c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_80c = rd32(sp0 - 0x80cu);
        loc_808 = rd32(sp0 - 0x808u);
        g->esp = sp0 - 0x81cu;
        (void)sp0;
        return 1;
    }
    case 0x1025de72u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x824u;
        (void)sp0;
        return 1;
    }
    case 0x1025de82u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x830u;
        wr32(sp0 - 0x830u, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    case 0x1025deceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x81cu;
        wr32(sp0 - 0x82cu, sp0 - 0x800u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1025dd40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1025dd40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
