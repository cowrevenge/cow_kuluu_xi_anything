/* f_0x100e1470 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e1470(Guest* g)
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 140u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100e1505u: eax = g->eax; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100e1505;
    case 0x100e1507u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100e1507;
    case 0x100e1563u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100e1563;
    case 0x100e1614u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x78u); in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x78u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100e1614;
    case 0x100e161au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x78u); in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x78u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100e161a;
    case 0x100e1624u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x78u); in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x78u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100e1624;
    case 0x100e1657u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x78u); in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x78u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100e1657;
    case 0x100e1669u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100e1669;
    case 0x100e1674u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100e1674;
    default: break;
    }
#endif

    COW_AT(100e1470)
    wr32(sp0 - 0x6cu, in_ebx);
    wr32(sp0 - 0x70u, in_esi);
    wr32(sp0 - 0x74u, in_edi);
    wr32(COW_IMG(0x104ae8bcu), 0u);
    wr16(COW_IMG(0x104ae8c0u), 0u);
    g->esp = sp0 - 0x74u;
    t1 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
    wr32(COW_IMG(0x104b0754u), t1);
    wr32(COW_IMG(0x104b0718u), 0u);
    wr32(COW_IMG(0x104b071cu), 0u);
    wr32(COW_IMG(0x104b0720u), 0u);
    wr32(COW_IMG(0x104b0724u), 0u);
    wr32(COW_IMG(0x104b0728u), 0u);
    edi = COW_IMG(0x104b072cu);
    eax = 0u;
    ecx = 6u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(COW_IMG(0x104b072cu), 0x6d3d7330u);
    wr32(COW_IMG(0x104b0718u), 0x6d3d7330u);
    wr32(COW_IMG(0x104b0730u), 0x5a49313cu);
    wr32(COW_IMG(0x104b071cu), 0x5a49313cu);
    wr32(COW_IMG(0x104b0734u), 0x43427a32u);
    wr32(COW_IMG(0x104b0720u), 0x43427a32u);
    wr32(COW_IMG(0x104b0738u), 0x7e7b3863u);
    wr32(COW_IMG(0x104b0724u), 0x7e7b3863u);
    t2 = cow_divu(g, rd32(COW_IMG(0x104b0754u)), 0xau);
    t3 = cow_modu(g, rd32(COW_IMG(0x104b0754u)), 0xau);
    if (t3 + 3u == 0u)
    {
        edx = t3 + 3u;
    }
    else
    {
        eax = t2;
        edx = t3 + 3u;
    COW_AT(100e1505)
        ecx = 0xau;
        esi = edx;
L_100e1507: ;
    COW_AT(100e1507)
        wr32(sp0 - 0x78u, sp0 - 0x68u);
        g->ecx = ecx;
        g->edx = sp0 - 0x68u;
        g->esp = sp0 - 0x74u;
        cow_cdecl(g, COW_IMG(0x100dde90u), 1, sp0 - 0x68u);
        t4 = g->ecx;
        t5 = g->edx;
        wr32(sp0 - 0x7cu, 0x14u);
        wr32(sp0 - 0x80u, COW_IMG(0x104b0744u));
        wr32(sp0 - 0x84u, sp0 - 0x68u);
        g->eax = sp0 - 0x68u;
        g->edx = t5;
        g->esp = sp0 - 0x78u;
        t6 = cow_cdecl(g, COW_IMG(0x100ddec0u), 3, sp0 - 0x68u, COW_IMG(0x104b0744u), 0x14u);
        t7 = g->edx;
        wr32(sp0 - 0x88u, sp0 - 0x68u);
        g->ecx = sp0 - 0x68u;
        g->edx = t7;
        g->esp = sp0 - 0x84u;
        t8 = cow_cdecl(g, COW_IMG(0x100ddf60u), 1, sp0 - 0x68u);
        t9 = g->ecx;
        t10 = g->edx;
        g->esp = sp0 - 0x74u;
        t11 = cow_fastcall(g, COW_IMG(0x103149e0u), t9, t10, 0);
        t12 = rd32(sp0 - 8u);
        t13 = rd32(sp0 - 0x10u);
        wr32(COW_IMG(0x104b0754u), t11);
        t14 = rd32(sp0 - 0xcu);
        wr32(COW_IMG(0x104b0744u), t13);
        t15 = rd32(sp0 - 4u);
        wr32(COW_IMG(0x104b0748u), t14);
        wr32(COW_IMG(0x104b074cu), t12);
        wr32(COW_IMG(0x104b0750u), t15);
        if (esi != 1u)
        {
            eax = t14;
            ecx = t12;
            esi = esi - 1u;
            goto L_100e1507;
        }
        edx = t15;
    }
    COW_AT(100e1563)
    t16 = rd32(sp0 - 8u);
    wr32(COW_IMG(0x104b0740u), t16);
    wr32(sp0 - 0x78u, in_ebp);
    wr32(arg1, COW_IMG(0x104ae8b8u));
    wr16(COW_IMG(0x104ae8c4u), 0u);
    wr16(COW_IMG(0x104b0758u), 0u);
    wr16(COW_IMG(0x104b075au), 2u);
    wr32(COW_IMG(0x104b075cu), COW_IMG(0x100e16a0u));
    wr32(COW_IMG(0x104b0760u), COW_IMG(0x100e1740u));
    wr32(COW_IMG(0x104b0764u), COW_IMG(0x100e16a0u));
    wr32(COW_IMG(0x104b0768u), COW_IMG(0x100e1710u));
    wr32(COW_IMG(0x104b076cu), 0u);
    wr16(COW_IMG(0x104b077cu), 0u);
    wr16(COW_IMG(0x104b077eu), 2u);
    wr32(COW_IMG(0x104b0780u), COW_IMG(0x100e16a0u));
    wr32(COW_IMG(0x104b0784u), COW_IMG(0x100e1740u));
    wr32(COW_IMG(0x104b0788u), COW_IMG(0x100e16a0u));
    wr32(COW_IMG(0x104b078cu), 0u);
    wr16(COW_IMG(0x104b07a0u), 0u);
    wr16(COW_IMG(0x104b07a2u), 2u);
    wr32(COW_IMG(0x104b07a4u), COW_IMG(0x100e16e0u));
    wr32(COW_IMG(0x104b07a8u), COW_IMG(0x100e16a0u));
    wr32(COW_IMG(0x104b07acu), COW_IMG(0x100e1740u));
    wr32(COW_IMG(0x104b07b0u), COW_IMG(0x100e16a0u));
    wr32(COW_IMG(0x104b07b4u), 0u);
    ecx = COW_IMG(0x100e1740u);
    esi = COW_IMG(0x104b07d8u);
    edi = 2u;
L_100e1614: ;
    COW_AT(100e1614)
    if (rd32(esi) != 0u)
    {
        eax = rd32(esi);
    COW_AT(100e161a)
        wr32(sp0 - 0x7cu, 0u);
        t17 = rd32(esi + 4u);
        wr32(sp0 - 0x80u, t17);
        g->edx = t17;
        g->esp = sp0 - 0x78u;
        cow_thiscall_cdecl(g, eax, ecx, 2, t17, 0u);
        t18 = g->ecx;
        t19 = g->edx;
        ecx = t18;
        edx = t19;
    }
    COW_AT(100e1624)
    wr8(esi - 0x10u, 0u);
    wr32(esi - 0x14u, 0u);
    wr32(esi, 0u);
    wr32(esi + 4u, 0u);
    wr16(esi + 8u, 0u);
    wr8(esi - 0xfu, 0u);
    wr16(esi - 0xeu, 0u);
    wr16(esi + 0x79cu, 0u);
    wr16(esi + 0x79eu, 2u);
    wr32(esi + 0x7a0u, 0u);
    if (edi != 1u)
    {
        esi = esi + 0x7d4u;
        edi = edi - 1u;
        goto L_100e1614;
    }
    COW_AT(100e1657)
    wr16(COW_IMG(0x104ae8c2u), 0u);
    eax = COW_IMG(0x104af058u);
    ecx = 4u;
L_100e1669: ;
    COW_AT(100e1669)
    wr16(eax, 0u);
    if (ecx != 1u)
    {
        eax = eax + 0x794u;
        ecx = ecx - 1u;
        goto L_100e1669;
    }
    eax = eax + 0x794u;
    ecx = ecx - 1u;
    COW_AT(100e1674)
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x7cu, COW_IMG(0x104ae8b8u));
    wr32(COW_IMG(0x104ae8b8u), 0u);
    g->eax = eax;
    g->esp = sp0 - 0x78u;
    t20 = cow_cdecl(g, COW_IMG(0x100d8490u), 1, COW_IMG(0x104ae8b8u));
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (t20 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100e1470(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100e1505u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->ecx = 0xau;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100e1507u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100e1563u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100e1614u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x78u);
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebx = 0u;
        g->ebp = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100e161au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x78u);
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebx = 0u;
        g->ebp = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100e1624u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x78u);
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebx = 0u;
        g->ebp = 2u;
        (void)sp0;
        return 1;
    }
    case 0x100e1657u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x78u);
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100e1669u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100e1674u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100e1470(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100e1470(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
