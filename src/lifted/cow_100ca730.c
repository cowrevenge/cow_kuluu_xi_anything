/* f_0x100ca730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100ca730(Guest* g)
{
    double d20;
    double d34;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
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
    uint32_t t35;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    if (rd32(self + 0x794u) == 0u)
    {
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        ebx = rd32(self + 0x794u);
        if (rd32(ebx + 0x70u) == 0u)
        {
            esi = in_esi;
            edi = in_edi;
        }
        else
        {
            if (rd32(COW_IMG(0x1057876cu)) == 0u)
            {
                esi = in_esi;
                edi = in_edi;
            }
            else
            {
                ecx = rd32(COW_IMG(0x1057876cu));
                wr32(sp0 - 0x20u, sp0 - 0x10u);
                g->esp = sp0 - 0x1cu;
                t1 = cow_call_regs(g, COW_IMG(0x10159c80u), sp0 - 0x10u, ecx, g->edx, 0, 1, sp0 - 0x10u);
                if ((uint8_t)t1 == 0u)
                {
                    esi = in_esi;
                    edi = in_edi;
                }
                else
                {
                    eax = t1;
                    wr32(sp0 - 0x20u, in_esi);
                    wr32(sp0 - 0x24u, in_edi);
                    wr32(sp0 - 0x28u, sp0 - 0x10u);
                    wr32(sp0 - 0x2cu, ebx + 0x34u);
                    g->edx = ebx + 0x34u;
                    g->esp = sp0 - 0x24u;
                    cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x34u, sp0 - 0x10u);
                    t2 = g->edx;
                    wr32(sp0 - 0x30u, sp0 - 0x10u);
                    wr32(sp0 - 0x34u, ebx + 0xc4u);
                    g->eax = sp0 - 0x10u;
                    g->esp = sp0 - 0x2cu;
                    t3 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0xc4u, sp0 - 0x10u);
                    wr32(sp0 - 0x28u, sp0 - 0x10u);
                    g->edx = sp0 - 0x10u;
                    g->esp = sp0 - 0x24u;
                    cow_thiscall(g, COW_IMG(0x100a57c0u), ebx, 1, sp0 - 0x10u);
                    t4 = g->edx;
                    wr32(sp0 - 0x28u, sp0 - 0x10u);
                    wr32(sp0 - 0x2cu, ebx + 0x5c4u);
                    g->ecx = ebx + 0x5c4u;
                    cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x5c4u, sp0 - 0x10u);
                    t5 = g->ecx;
                    wr32(sp0 - 0x30u, sp0 - 0x10u);
                    wr32(sp0 - 0x34u, ebx + 0x5fcu);
                    g->eax = ebx + 0x5fcu;
                    g->esp = sp0 - 0x2cu;
                    t6 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x5fcu, sp0 - 0x10u);
                    wr32(sp0 - 0x38u, sp0 - 0x10u);
                    wr32(sp0 - 0x3cu, ebx + 0x9d8u);
                    wr32(ebx + 0x608u, 0x3f800000u);
                    g->edx = ebx + 0x9d8u;
                    g->esp = sp0 - 0x34u;
                    cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x9d8u, sp0 - 0x10u);
                    t7 = g->edx;
                    wr32(ebx + 0x9e4u, 0x3f800000u);
                    g->edx = t7;
                    g->esp = sp0 - 0x24u;
                    cow_thiscall(g, COW_IMG(0x10084560u), self, 0);
                    t8 = g->edx;
                    d9 = cow_take_float(g);
                    wrf32(ebx + 0x754u, (float)d9);
                    wr32(ebx + 0x75cu, 0x3f800000u);
                    g->eax = rd32(self);
                    g->edx = t8;
                    t10 = rd32(self);
                    t11 = rd32(ebx);
                    t12 = cow_thiscall(g, rd32(t10 + 0x218u), self, 0);
                    t13 = g->edx;
                    wr32(sp0 - 0x28u, t12);
                    t14 = cow_thiscall(g, rd32(t11 + 0x214u), ebx, 1, t12);
                    g->edx = rd32(self);
                    t15 = rd32(self);
                    t16 = rd32(ebx);
                    t17 = cow_thiscall(g, rd32(t15 + 0x220u), self, 0);
                    t18 = g->ecx;
                    t19 = g->edx;
                    d20 = cow_take_float(g);
                    wr32(sp0 - 0x28u, t18);
                    wrf32(sp0 - 0x28u, (float)(double)(float)d20);
                    g->edx = t19;
                    cow_thiscall(g, rd32(t16 + 0x21cu), ebx, 1, cow_f2bits((double)(float)d20));
                    t21 = g->edx;
                    g->eax = rd32(self);
                    g->edx = t21;
                    t22 = rd32(self);
                    t23 = rd32(ebx);
                    t24 = cow_thiscall(g, rd32(t22 + 0x188u), self, 0);
                    t25 = g->edx;
                    wr32(sp0 - 0x28u, t24);
                    cow_thiscall(g, rd32(t23 + 0x184u), ebx, 1, t24);
                    wr32(sp0 - 0x14u, 5u);
                    eax = ebx + 0x388u;
                    edx = self - ebx;
                    loc_14 = 5u;
L_100ca851: ;
                    esi = eax + edx;
                    edi = eax;
                    ecx = 0x1au;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    wr32(sp0 - 0x14u, loc_14 - 1u);
                    if (loc_14 != 1u)
                    {
                        eax = eax + 0x68u;
                        loc_14 = loc_14 - 1u;
                        goto L_100ca851;
                    }
                    eax = eax + 0x68u;
                    t26 = rd32(self + 0x590u);
                    wr32(ebx + 0x590u, t26);
                    t27 = (edx & 0xffffff00u) | rd8(self + 0x17cu);
                    wr32(sp0 - 0x28u, t27);
                    g->edx = t27;
                    g->esp = sp0 - 0x24u;
                    cow_call_regs(g, COW_IMG(0x100aaee0u), eax, ebx, g->edx, 0, 1, t27);
                    t28 = g->edx;
                    g->eax = rd32(self);
                    g->edx = t28;
                    t29 = rd32(self);
                    t30 = rd32(ebx);
                    t31 = cow_thiscall(g, rd32(t29 + 0x204u), self, 0);
                    t32 = g->ecx;
                    t33 = g->edx;
                    d34 = cow_take_float(g);
                    wr32(sp0 - 0x28u, t32);
                    wrf32(sp0 - 0x28u, (float)(double)(float)d34);
                    cow_thiscall(g, rd32(t30 + 0x208u), ebx, 1, cow_f2bits((double)(float)d34));
                    t35 = rd32(sp0 - 0x24u);
                    wr8(ebx + 0x5e1u, 1u);
                    esi = rd32(sp0 - 0x20u);
                    edi = t35;
                }
            }
        }
    }
    g->esi = esi;
    g->edi = edi;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ca730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ca730(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
