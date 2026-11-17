/* f_0x1003db60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1003db60(Guest* g)
{
    double d29;
    double d33;
    double d34;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
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
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
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
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 92u);

    wr32(sp0 - 0x2cu, in_esi);
    if (rd32(COW_IMG(0x1047bfa8u)) == 0u)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
        loc_2c = in_esi;
    }
    else
    {
        if (rd32(rd32(COW_IMG(0x1065cb04u)) + 0x18u) == 0u)
        {
            ebx = in_ebx;
            ebp = in_ebp;
            edi = in_edi;
            loc_2c = in_esi;
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x18u);
            wr32(sp0 - 0x24u, eax + 0x4cu);
            if (eax + 0x4cu == 0u)
            {
                ebx = in_ebx;
                ebp = in_ebp;
                edi = in_edi;
                loc_2c = in_esi;
            }
            else
            {
                esi = eax + 0x4cu;
                loc_24 = eax + 0x4cu;
                t1 = (self & 0xffffff00u) | rd8(esi + 2u);
                wr32(sp0 - 0x30u, t1);
                t2 = (in_edx & 0xffffff00u) | rd8(esi + 1u);
                wr32(sp0 - 0x34u, t2);
                t3 = (eax & 0xffffff00u) | rd8(esi);
                wr32(sp0 - 0x38u, t3);
                g->eax = t3;
                g->edx = t2;
                g->esp = sp0 - 0x2cu;
                t4 = cow_cdecl(g, COW_IMG(0x10014d90u), 3, t3, t2, t1);
                t5 = g->edx;
                if (rd8(esi + 0x12u) <= 2u)
                {
                    ebx = in_ebx;
                    ebp = in_ebp;
                    edi = in_edi;
                    loc_2c = in_esi;
                }
                else
                {
                    eax = (t4 & 0xffffff00u) | rd8(esi + 0x12u);
                    edx = t5;
                    if (rd8(COW_IMG(0x1047b984u)) & 1u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047b984u));
                    }
                    else
                    {
                        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047b984u));
                        wr8(COW_IMG(0x1047b984u), (uint8_t)(eax | 1u));
                        g->eax = eax;
                        g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 1u);
                        g->esp = sp0 - 0x2cu;
                        t6 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047b994u), 0);
                        t7 = g->ecx;
                        t8 = g->edx;
                        wr32(sp0 - 0x30u, COW_IMG(0x1003ddf0u));
                        g->edx = t8;
                        t9 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x1003ddf0u));
                        t10 = g->edx;
                        eax = t9;
                        edx = t10;
                    }
                    wr32(sp0 - 0x30u, in_ebx);
                    wr32(sp0 - 0x34u, in_ebp);
                    wr32(sp0 - 0x38u, in_edi);
                    wr32(sp0 - 0x3cu, COW_IMG(0x10351df8u));
                    wr32(sp0 - 0x40u, COW_IMG(0x10351e4cu));
                    g->esp = sp0 - 0x38u;
                    cow_fastcall(g, COW_IMG(0x1006ae30u), COW_IMG(0x1047b994u), edx, 2, COW_IMG(0x10351e4cu), COW_IMG(0x10351df8u));
                    t11 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
                    t12 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
                    wr32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u, t11);
                    esi = rd32(COW_IMG(0x1047bfa8u)) + 0xb50u;
                    edi = t12;
                    ecx = 0x10u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    t13 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
                    t14 = rd32(COW_IMG(0x1047cf7cu));
                    t15 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
                    wr32(t14 + 0xa90u, t13);
                    wr32(sp0 - 0x3cu, t15);
                    t16 = rd32(COW_IMG(0x1047bfa8u));
                    esi = rd32(COW_IMG(0x1047bfa8u)) + 0xd50u;
                    edi = t15;
                    ecx = 0x10u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    g->edx = t16;
                    cow_thiscall(g, COW_IMG(0x1006a480u), rd32(COW_IMG(0x1047bfa8u)), 1, t15);
                    t17 = g->edx;
                    t18 = rd32(COW_IMG(0x1047cf7cu)) + 0x810u;
                    wr32(sp0 - 0x3cu, t18);
                    g->eax = t18;
                    g->edx = t17;
                    t19 = cow_thiscall(g, COW_IMG(0x1006a480u), rd32(COW_IMG(0x1047bfa8u)), 1, t18);
                    t20 = g->edx;
                    g->edx = t20;
                    cow_thiscall(g, COW_IMG(0x1006a4c0u), rd32(COW_IMG(0x1047bfa8u)), 0);
                    t21 = g->edx;
                    wr32(t12 + 0x3cu, 0x3f800000u);
                    wr32(t12 + 0x30u, 0u);
                    wr32(t12 + 0x34u, 0u);
                    wr32(t12 + 0x38u, 0u);
                    wr32(sp0 - 0x3cu, t12);
                    t22 = cow_thiscall(g, COW_IMG(0x1006a520u), rd32(COW_IMG(0x1047bfa8u)), 1, t12);
                    wr32(sp0 - 0x28u, sp0 - 0x20u);
                    wr32(sp0 - 0x24u, 8u);
                    eax = t22;
                    ebx = t12;
                    ebp = t15;
                    esi = rd32(sp0 - 0x24u);
                    edi = rd32(sp0 - 0x24u) + 0x20u;
                    loc_28 = sp0 - 0x20u;
                    loc_24 = 8u;
L_1003dcae: ;
                    wr32(sp0 - 0x3cu, rd32(edi));
                    g->esp = sp0 - 0x38u;
                    cow_thiscall(g, COW_IMG(0x1003e280u), loc_28, 1, rd32(edi));
                    t23 = rd32(sp0 - 0x28u) + 4u;
                    wr32(sp0 - 0x28u, t23);
                    t24 = rd32(sp0 - 0x24u) - 1u;
                    wr32(sp0 - 0x24u, t24);
                    if (rd32(sp0 - 0x24u) != 1u)
                    {
                        eax = t24;
                        edi = edi + 4u;
                        loc_28 = t23;
                        loc_24 = t24;
                        goto L_1003dcae;
                    }
                    wr32(sp0 - 0x3cu, esi + 0x40u);
                    wr32(sp0 - 0x40u, sp0 - 0x20u);
                    t25 = rd8(esi + 0x12u);
                    wr32(sp0 - 0x44u, t25);
                    wr32(sp0 - 0x48u, 8u);
                    g->eax = esi + 0x40u;
                    g->ecx = sp0 - 0x20u;
                    g->edx = t25;
                    g->esp = sp0 - 0x48u;
                    t26 = cow_stdcall(g, COW_IMG(0x10014d80u), 0);
                    t27 = g->ecx;
                    t28 = g->edx;
                    d29 = cow_take_float(g);
                    wrf32(sp0 - 0x24u, (float)(double)(float)d29);
                    g->ecx = t27;
                    g->edx = t28;
                    t30 = cow_stdcall(g, COW_IMG(0x10014d70u), 0);
                    t31 = g->ecx;
                    t32 = g->edx;
                    d33 = cow_take_float(g);
                    wr32(sp0 - 0x4cu, t31);
                    d34 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 - 0x24u) - d33) * (double)rdf32(COW_IMG(0x10329a34u)));
                    wrf32(sp0 - 0x4cu, (float)d34);
                    cow_cdecl(g, COW_IMG(0x1003d640u), 1, cow_f2bits(d34));
                    t35 = rd32(sp0 - 0x20u);
                    wr32(sp0 - 0x50u, t35);
                    t36 = rd32(sp0 - 0x1fu);
                    wr32(sp0 - 0x54u, t36);
                    t37 = rd32(sp0 - 0x1eu);
                    wr32(sp0 - 0x58u, t37);
                    g->edx = t37;
                    g->esp = sp0 - 0x4cu;
                    cow_cdecl(g, COW_IMG(0x10014d90u), 3, t37, t36, t35);
                    t38 = g->edx;
                    t39 = rd32(COW_IMG(0x1045666cu));
                    wr32(t39 + 0x178u, 0x43000000u);
                    g->edx = t38;
                    g->esp = sp0 - 0x38u;
                    cow_thiscall(g, COW_IMG(0x1006a4f0u), rd32(COW_IMG(0x1047bfa8u)), 0);
                    t40 = g->edx;
                    wr32(sp0 - 0x3cu, 0u);
                    wr32(sp0 - 0x40u, 0x1bu);
                    t41 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    wr32(sp0 - 0x44u, t41);
                    t42 = rd32(t41);
                    cow_thiscall(g, rd32(t42 + 0xc8u), t42, 3, t41, 0x1bu, 0u);
                    t43 = g->ecx;
                    wr32(sp0 - 0x3cu, 1u);
                    wr32(sp0 - 0x40u, 0x89u);
                    t44 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    wr32(sp0 - 0x44u, t44);
                    g->edx = rd32(t44);
                    t45 = rd32(t44);
                    cow_thiscall(g, rd32(t45 + 0xc8u), t43, 3, t44, 0x89u, 1u);
                    t46 = g->edx;
                    wr32(sp0 - 0x3cu, 0u);
                    wr32(sp0 - 0x40u, 0x1cu);
                    t47 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    wr32(sp0 - 0x44u, t47);
                    t48 = rd32(t47);
                    cow_thiscall(g, rd32(t48 + 0xc8u), t48, 3, t47, 0x1cu, 0u);
                    t49 = g->ecx;
                    wr32(sp0 - 0x3cu, 1u);
                    wr32(sp0 - 0x40u, 0x16u);
                    t50 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    wr32(sp0 - 0x44u, t50);
                    g->edx = rd32(t50);
                    t51 = rd32(t50);
                    cow_thiscall(g, rd32(t51 + 0xc8u), t49, 3, t50, 0x16u, 1u);
                    t52 = g->edx;
                    wr32(sp0 - 0x3cu, 1u);
                    wr32(sp0 - 0x40u, 0xeu);
                    t53 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    wr32(sp0 - 0x44u, t53);
                    cow_thiscall(g, rd32(rd32(t53) + 0xc8u), rd32(t53), 3, t53, 0xeu, 1u);
                    t54 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
                    t55 = rd32(COW_IMG(0x1047cf7cu));
                    t56 = rd32(sp0 - 0x38u);
                    wr32(t55 + 0xa90u, t54);
                    wr32(t54 * 4u + t55 + 0xa10u, ebp);
                    t57 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
                    t58 = rd32(COW_IMG(0x1047cf7cu));
                    t59 = rd32(sp0 - 0x34u);
                    wr32(t58 + 0xa90u, t57);
                    wr32(t57 * 4u + t58 + 0xa10u, ebx);
                    ebx = rd32(sp0 - 0x30u);
                    ebp = t59;
                    edi = t56;
                    loc_2c = rd32(sp0 - 0x2cu);
                }
            }
        }
    }
    g->ebx = ebx;
    g->esi = loc_2c;
    g->edi = edi;
    g->ebp = ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003db60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1003db60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
