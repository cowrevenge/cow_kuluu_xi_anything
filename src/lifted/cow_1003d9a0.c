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
    uint32_t t30;
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
    cow_frame(g, sp0, 88u);

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
                if (rd8(COW_IMG(0x1047b985u)) & 1u)
                {
                    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047b985u));
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047b985u));
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
                wr32(sp0 - 0x48u, t26);
                d29 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 - 0x24u) - d28) - (double)rdf32(COW_IMG(0x1032961cu)));
                wrf32(sp0 - 0x48u, (float)d29);
                cow_cdecl(g, COW_IMG(0x1003d640u), 1, cow_f2bits(d29));
                t30 = rd32(sp0 - 0x20u);
                wr32(sp0 - 0x4cu, t30);
                t31 = rd32(sp0 - 0x1fu);
                wr32(sp0 - 0x50u, t31);
                t32 = rd32(sp0 - 0x1eu);
                wr32(sp0 - 0x54u, t32);
                g->eax = t31;
                g->esp = sp0 - 0x48u;
                t33 = cow_cdecl(g, COW_IMG(0x10014d90u), 3, t32, t31, t30);
                t34 = rd32(COW_IMG(0x1045666cu));
                wr32(t34 + 0x178u, 0x43000000u);
                g->edx = t34;
                g->esp = sp0 - 0x34u;
                cow_thiscall(g, COW_IMG(0x10044210u), rd32(COW_IMG(0x1047bbb4u)), 0);
                t35 = g->edx;
                wr32(sp0 - 0x38u, 0u);
                wr32(sp0 - 0x3cu, 0x1bu);
                t36 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x40u, t36);
                t37 = rd32(t36);
                cow_thiscall(g, rd32(t37 + 0xc8u), t37, 3, t36, 0x1bu, 0u);
                t38 = g->ecx;
                wr32(sp0 - 0x38u, 1u);
                wr32(sp0 - 0x3cu, 0x89u);
                t39 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x40u, t39);
                g->edx = rd32(t39);
                t40 = rd32(t39);
                cow_thiscall(g, rd32(t40 + 0xc8u), t38, 3, t39, 0x89u, 1u);
                t41 = g->edx;
                wr32(sp0 - 0x38u, 0u);
                wr32(sp0 - 0x3cu, 0x1cu);
                t42 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x40u, t42);
                t43 = rd32(t42);
                cow_thiscall(g, rd32(t43 + 0xc8u), t43, 3, t42, 0x1cu, 0u);
                t44 = g->ecx;
                wr32(sp0 - 0x38u, 1u);
                wr32(sp0 - 0x3cu, 0x16u);
                t45 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x40u, t45);
                g->edx = rd32(t45);
                t46 = rd32(t45);
                cow_thiscall(g, rd32(t46 + 0xc8u), t44, 3, t45, 0x16u, 1u);
                t47 = g->edx;
                wr32(sp0 - 0x38u, 1u);
                wr32(sp0 - 0x3cu, 0xeu);
                t48 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x40u, t48);
                g->eax = t48;
                g->edx = t47;
                t49 = cow_thiscall(g, rd32(rd32(t48) + 0xc8u), rd32(t48), 3, t48, 0xeu, 1u);
                t50 = g->edx;
                eax = t49;
                edx = t50;
                ebx = rd32(sp0 - 0x2cu);
                ebp = rd32(sp0 - 0x30u);
                edi = rd32(sp0 - 0x34u);
                loc_28 = rd32(sp0 - 0x28u);
            }
        }
    }
    g->ebx = ebx;
    g->esi = loc_28;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003d9a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003d9a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
