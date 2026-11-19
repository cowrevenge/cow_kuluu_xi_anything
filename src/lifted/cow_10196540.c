/* f_0x10196540 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10196540(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 24u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1019654cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_1019654c;
    case 0x10196553u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10196553;
    case 0x10196561u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10196561;
    case 0x10196567u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10196567;
    case 0x1019656cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1019656c;
    case 0x1019657bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1019657b;
    case 0x1019659fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1019659f;
    case 0x101965b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101965b8;
    default: break;
    }
#endif

    COW_AT(10196540)
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x10310e30u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_10196553;
    }
    eax = t1;
    COW_AT(1019654c)
    g->esi = in_esi;
    g->edi = in_edi;
    return 0xffffffffu;
L_10196553: ;
    COW_AT(10196553)
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_stdcall(g, COW_IMG(0x10310e3bu), 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 1u)
    {
        esi = 0u;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
    COW_AT(10196561)
        esi = 0u;
        edi = rd32(COW_IMG(0x103290f8u));
L_10196567: ;
    COW_AT(10196567)
        if ((int32_t)esi >= 100) goto L_1019657b;
    COW_AT(1019656c)
        wr32(sp0 - 0x14u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t7 = cow_thiscall(g, edi, ecx, 1, 0u);
        t8 = g->ecx;
        t9 = g->edx;
        g->ecx = t8;
        g->edx = t9;
        t10 = cow_stdcall(g, COW_IMG(0x10310e3bu), 0);
        t11 = g->ecx;
        t12 = g->edx;
        if (t10 != 1u)
        {
            eax = t10;
            ecx = t11;
            edx = t12;
            esi = esi + 1u;
            goto L_10196567;
        }
        esi = esi + 1u;
    }
L_1019657b: ;
    COW_AT(1019657b)
    wr32(sp0 - 8u, rd32(COW_IMG(0x10379a10u)));
    wr32(sp0 - 0x14u, sp0 - 8u);
    wr32(sp0 - 4u, rd32(COW_IMG(0x10379a14u)));
    g->eax = rd32(COW_IMG(0x10379a10u));
    g->ecx = rd32(COW_IMG(0x10379a14u));
    g->edx = sp0 - 8u;
    t13 = rd32(COW_IMG(0x10379a10u));
    t14 = rd32(COW_IMG(0x10379a14u));
    g->esp = sp0 - 0x10u;
    t15 = cow_cdecl(g, COW_IMG(0x10310e67u), 1, sp0 - 8u);
    t16 = g->ecx;
    t17 = g->edx;
    if (t15 == 0u)
    {
        eax = t15;
        ecx = t16;
        edx = t17;
        goto L_101965b8;
    }
    eax = t15;
    COW_AT(1019659f)
    t18 = rd32(eax + 0x18u) == 0u;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x10310e5cu), 0);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return t18;
L_101965b8: ;
    COW_AT(101965b8)
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x10310e5cu), 0);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return 0xffffffffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10196540(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1019654cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10196553u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10196561u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10196567u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1019656cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1019657bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1019659fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101965b8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10196540(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10196540(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
