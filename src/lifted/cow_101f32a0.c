/* f_0x101f32a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101f32a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
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
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101f32b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101f32b8;
    case 0x101f32cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101f32cd;
    case 0x101f32dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101f32df;
    case 0x101f32f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101f32f8;
    case 0x101f3338u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101f3338;
    case 0x101f3344u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101f3344;
    case 0x101f334du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101f334d;
    case 0x101f339au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101f339a;
    default: break;
    }
#endif

    COW_AT(101f32a0)
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101f1120u), rd32(COW_IMG(0x10663740u)), 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        esi = t1;
        edi = 0x7fu;
    }
    else
    {
        edx = t2;
        esi = t1;
    COW_AT(101f32b8)
        g->eax = rd16(esi);
        g->edx = edx;
        t3 = rd16(esi);
        t4 = rd32(COW_IMG(0x10621808u));
        g->esp = sp0 - 8u;
        t5 = cow_thiscall(g, COW_IMG(0x1015bc40u), t4, 1, t3);
        t6 = g->ecx;
        t7 = g->edx;
        if (t5 == 0u)
        {
            eax = t5;
            edx = t7;
            edi = 0x7fu;
        }
        else
        {
            eax = t5;
            ecx = t6;
            edx = t7;
    COW_AT(101f32cd)
            t8 = rd16(eax + 0xeu);
            wr8(eax + 0x1b3u, rd8(eax + 0x1b3u));
            edi = t8;
        }
    }
    COW_AT(101f32df)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x10159440u), rd32(COW_IMG(0x1057876cu)), 2, COW_IMG(0x101f31e0u), edi);
    t10 = g->edx;
    if ((uint8_t)t9 != 0u)
    {
        eax = t9;
        edx = t10;
    COW_AT(101f32f8)
        g->eax = eax;
        t11 = rd32(COW_IMG(0x1057876cu));
        g->esp = sp0 - 8u;
        t12 = cow_thiscall(g, COW_IMG(0x101594e0u), t11, 1, COW_IMG(0x101f3230u));
        t13 = g->ecx;
        g->edx = rd16(esi);
        t14 = rd16(esi);
        t15 = cow_cdecl(g, COW_IMG(0x101f3570u), 1, t14);
        t16 = g->edx;
        g->ecx = rd32(COW_IMG(0x10663740u));
        g->edx = t16;
        t17 = rd32(COW_IMG(0x10663740u));
        cow_stdcall(g, COW_IMG(0x101f2740u), 0);
        t18 = g->ecx;
        t19 = g->edx;
        if (rd8(rd32(COW_IMG(0x10663740u)) + 0x90u) == 0u)
        {
            edx = t19;
    COW_AT(101f3344)
            t21 = rd32(rd32(COW_IMG(0x10663748u)) + 8u);
            eax = rd32(COW_IMG(0x10663748u));
            loc_1c = t21;
        }
        else
        {
            eax = rd32(COW_IMG(0x10663740u));
    COW_AT(101f3338)
            t20 = rd32(rd32(COW_IMG(0x1066374cu)) + 8u);
            edx = t20;
            loc_1c = t20;
        }
    COW_AT(101f334d)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t22 = cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, loc_1c, 1u, 1u, 0u, 0u);
        t23 = g->ecx;
        t24 = g->edx;
        g->edx = t24;
        g->esp = sp0 - 0xcu;
        t25 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 2u);
        t26 = g->edx;
        g->edx = t26;
        t27 = rd32(COW_IMG(0x1057847cu));
        g->esp = sp0 - 8u;
        t28 = cow_thiscall(g, COW_IMG(0x10150cc0u), t27, 2, t25, 2u);
        t29 = g->ecx;
        t30 = g->edx;
        g->edx = t30;
        g->esp = sp0 - 0xcu;
        t31 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 4u);
        t32 = g->edx;
        g->edx = t32;
        g->esp = sp0 - 8u;
        t33 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t31, 2u);
        t34 = g->edx;
        cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103820e4u));
    }
    COW_AT(101f339a)
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101f32a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101f32b8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0x7fu;
        (void)sp0;
        return 1;
    }
    case 0x101f32cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101f32dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101f32f8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101f3338u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 0x14u, 1u);
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101f3344u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 0x14u, 1u);
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101f334du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 0x14u, 1u);
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101f339au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101f32a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101f32a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
