/* f_0x1003d9a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1003d9a0(Guest* g)
{
    double d24;
    double d28;
    double d29;
    double d30;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 88u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1003d9b4u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x28u); goto E_1003d9b4;
    case 0x1003d9bfu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x28u); goto E_1003d9bf;
    case 0x1003d9ddu: eax = g->eax; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1003d9dd;
    case 0x1003d9e6u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1003d9e6;
    case 0x1003da08u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1003da08;
    case 0x1003da4eu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003da4e;
    case 0x1003da5fu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003da5f;
    case 0x1003db41u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_1003db41;
    default: break;
    }
#endif

    COW_AT(1003d9a0)
    wr32(sp0 - 0x28u, in_esi);
    if (rd32(rd32(COW_IMG(0x1065cb04u)) + 0x18u) == 0u)
    {
        eax = rd32(COW_IMG(0x1065cb04u));
        edx = in_edx;
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
        loc_28 = in_esi;
    }
    else
    {
        eax = rd32(COW_IMG(0x1065cb04u));
        esi = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x18u);
    COW_AT(1003d9b4)
        if (esi + 0x4cu == 0u)
        {
            edx = in_edx;
            ebx = in_ebx;
            ebp = in_ebp;
            edi = in_edi;
            loc_28 = in_esi;
        }
        else
        {
            esi = esi + 0x4cu;
    COW_AT(1003d9bf)
            t1 = (self & 0xffffff00u) | rd8(esi + 2u);
            wr32(sp0 - 0x2cu, t1);
            t2 = (in_edx & 0xffffff00u) | rd8(esi + 1u);
            wr32(sp0 - 0x30u, t2);
            t3 = (eax & 0xffffff00u) | rd8(esi);
            wr32(sp0 - 0x34u, t3);
            g->eax = t3;
            g->edx = t2;
            g->esp = sp0 - 0x28u;
            t4 = cow_cdecl(g, COW_IMG(0x10014d90u), 3, t3, t2, t1);
            t5 = g->edx;
            if (rd8(esi + 0x12u) <= 2u)
            {
                eax = (t4 & 0xffffff00u) | rd8(esi + 0x12u);
                edx = t5;
                ebx = in_ebx;
                ebp = in_ebp;
                edi = in_edi;
                loc_28 = in_esi;
            }
            else
            {
                eax = (t4 & 0xffffff00u) | rd8(esi + 0x12u);
                edx = t5;
    COW_AT(1003d9dd)
                if (rd8(COW_IMG(0x1047b985u)) & 1u)
                {
                    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047b985u));
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047b985u));
    COW_AT(1003d9e6)
                    wr8(COW_IMG(0x1047b985u), (uint8_t)(eax | 1u));
                    g->eax = eax;
                    g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 1u);
                    g->esp = sp0 - 0x28u;
                    t6 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047b988u), 0);
                    t7 = g->ecx;
                    t8 = g->edx;
                    wr32(sp0 - 0x2cu, COW_IMG(0x1003db50u));
                    g->edx = t8;
                    t9 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x1003db50u));
                    t10 = g->edx;
                    eax = t9;
                    edx = t10;
                }
    COW_AT(1003da08)
                wr32(sp0 - 0x2cu, in_ebx);
                wr32(sp0 - 0x30u, in_ebp);
                wr32(sp0 - 0x34u, in_edi);
                wr32(sp0 - 0x38u, COW_IMG(0x10351d60u));
                wr32(sp0 - 0x3cu, COW_IMG(0x10351db8u));
                g->eax = eax;
                g->esp = sp0 - 0x34u;
                t11 = cow_fastcall(g, COW_IMG(0x1006ae30u), COW_IMG(0x1047b988u), edx, 2, COW_IMG(0x10351db8u), COW_IMG(0x10351d60u));
                t12 = g->edx;
                t13 = rd32(COW_IMG(0x1047cf7cu)) + 0x810u;
                wr32(sp0 - 0x38u, t13);
                g->edx = t12;
                t14 = cow_thiscall(g, COW_IMG(0x1006a480u), rd32(COW_IMG(0x1047bfa8u)), 1, t13);
                t15 = g->edx;
                g->edx = t15;
                t16 = cow_thiscall(g, COW_IMG(0x10044230u), rd32(COW_IMG(0x1047bbb4u)), 0);
                t17 = g->edx;
                eax = t16;
                edx = t17;
                ebx = sp0 - 0x20u;
                ebp = 8u;
                edi = esi + 0x20u;
L_1003da4e: ;
    COW_AT(1003da4e)
                wr32(sp0 - 0x38u, edi);
                g->eax = eax;
                g->esp = sp0 - 0x34u;
                t18 = cow_fastcall(g, COW_IMG(0x1003e2a0u), ebx, edx, 1, edi);
                t19 = g->edx;
                if (ebp != 1u)
                {
                    eax = t18;
                    edx = t19;
                    ebx = ebx + 4u;
                    ebp = ebp - 1u;
                    edi = edi + 4u;
                    goto L_1003da4e;
                }
    COW_AT(1003da5f)
                wr32(sp0 - 0x38u, esi + 0x40u);
                wr32(sp0 - 0x3cu, sp0 - 0x20u);
                t20 = rd8(esi + 0x12u);
                wr32(sp0 - 0x40u, t20);
                wr32(sp0 - 0x44u, 8u);
                g->eax = sp0 - 0x20u;
                g->ecx = t20;
                g->edx = esi + 0x40u;
                g->esp = sp0 - 0x44u;
                t21 = cow_stdcall(g, COW_IMG(0x10014d80u), 0);
                t22 = g->ecx;
                t23 = g->edx;
                d24 = cow_take_float(g);
                wrf32(sp0 - 0x24u, (float)(double)(float)d24);
                g->ecx = t22;
                g->edx = t23;
                t25 = cow_stdcall(g, COW_IMG(0x10014d70u), 0);
                t26 = g->ecx;
                t27 = g->edx;
                d28 = cow_take_float(g);
                d29 = fr(g, (double)rdf32(sp0 - 0x24u) - d28);
                wr32(sp0 - 0x48u, t26);
                d30 = fr(g, d29 - (double)rdf32(COW_IMG(0x1032961cu)));
                wrf32(sp0 - 0x48u, (float)(double)(float)d30);
                cow_cdecl(g, COW_IMG(0x1003d640u), 1, cow_f2bits((double)(float)d30));
                t31 = rd32(sp0 - 0x20u);
                wr32(sp0 - 0x4cu, t31);
                t32 = rd32(sp0 - 0x1fu);
                wr32(sp0 - 0x50u, t32);
                t33 = rd32(sp0 - 0x1eu);
                wr32(sp0 - 0x54u, t33);
                g->eax = t32;
                g->esp = sp0 - 0x48u;
                t34 = cow_cdecl(g, COW_IMG(0x10014d90u), 3, t33, t32, t31);
                t35 = rd32(COW_IMG(0x1045666cu));
                wr32(t35 + 0x178u, 0x43000000u);
                g->edx = t35;
                g->esp = sp0 - 0x34u;
                cow_thiscall(g, COW_IMG(0x10044210u), rd32(COW_IMG(0x1047bbb4u)), 0);
                t36 = g->edx;
                wr32(sp0 - 0x38u, 0u);
                wr32(sp0 - 0x3cu, 0x1bu);
                t37 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x40u, t37);
                t38 = rd32(t37);
                cow_thiscall(g, rd32(t38 + 0xc8u), t38, 3, t37, 0x1bu, 0u);
                t39 = g->ecx;
                wr32(sp0 - 0x38u, 1u);
                wr32(sp0 - 0x3cu, 0x89u);
                t40 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x40u, t40);
                g->edx = rd32(t40);
                t41 = rd32(t40);
                cow_thiscall(g, rd32(t41 + 0xc8u), t39, 3, t40, 0x89u, 1u);
                t42 = g->edx;
                wr32(sp0 - 0x38u, 0u);
                wr32(sp0 - 0x3cu, 0x1cu);
                t43 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x40u, t43);
                t44 = rd32(t43);
                cow_thiscall(g, rd32(t44 + 0xc8u), t44, 3, t43, 0x1cu, 0u);
                t45 = g->ecx;
                wr32(sp0 - 0x38u, 1u);
                wr32(sp0 - 0x3cu, 0x16u);
                t46 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x40u, t46);
                g->edx = rd32(t46);
                t47 = rd32(t46);
                cow_thiscall(g, rd32(t47 + 0xc8u), t45, 3, t46, 0x16u, 1u);
                t48 = g->edx;
                wr32(sp0 - 0x38u, 1u);
                wr32(sp0 - 0x3cu, 0xeu);
                t49 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x40u, t49);
                g->eax = t49;
                g->edx = t48;
                t50 = cow_thiscall(g, rd32(rd32(t49) + 0xc8u), rd32(t49), 3, t49, 0xeu, 1u);
                t51 = g->edx;
                eax = t50;
                edx = t51;
                ebx = rd32(sp0 - 0x2cu);
                ebp = rd32(sp0 - 0x30u);
                edi = rd32(sp0 - 0x34u);
                loc_28 = rd32(sp0 - 0x28u);
            }
        }
    }
    COW_AT(1003db41)
    g->ebx = ebx;
    g->esi = loc_28;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1003d9a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1003d9b4u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1003d9bfu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1003d9ddu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1003d9e6u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1003da08u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1003da4eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1003da5fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1003db41u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1003d9a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1003d9a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
