/* f_0x102501e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102501e0(Guest* g)
{
    double d35;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x10u, 0x3f800000u);
    wr32(sp0 - 0xcu, 0x3f800000u);
    wr32(sp0 - 8u, 0x3f800000u);
    wr32(sp0 - 4u, 0x3f800000u);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102502f0u), 1, arg1);
    t1 = g->edx;
    if ((int32_t)rd32(arg1 + 4u) >= 2)
    {
        edx = t1;
        if (rd32(COW_IMG(0x1066914cu)) != 0u)
        {
            ecx = rd32(COW_IMG(0x1066914cu));
            wr32(sp0 - 0x18u, ecx);
            t2 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x1cu, t2);
            g->edx = rd32(t2);
            t3 = rd32(t2);
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, rd32(t3 + 0xd8u), ecx, 2, t2, ecx);
            t4 = g->edx;
            edx = t4;
        }
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, 0x3f800000u);
        wr32(sp0 - 0x20u, 0xff000000u);
        wr32(sp0 - 0x24u, 6u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, rd32(COW_IMG(0x1066941cu)));
        g->eax = rd32(COW_IMG(0x1066941cu));
        g->edx = edx;
        t5 = rd32(COW_IMG(0x1066941cu));
        t6 = rd32(rd32(COW_IMG(0x1066941cu)));
        g->esp = sp0 - 0x14u;
        t7 = cow_thiscall(g, rd32(t6 + 0x90u), t6, 7, t5, 0u, 0u, 6u, 0xff000000u, 0x3f800000u, 0u);
        t8 = g->ecx;
        t9 = g->edx;
        g->ecx = t8;
        g->edx = t9;
        t10 = cow_stdcall(g, COW_IMG(0x10281520u), 0);
        t11 = g->ecx;
        t12 = g->edx;
        g->ecx = t11;
        g->edx = t12;
        t13 = cow_stdcall(g, COW_IMG(0x102848b0u), 0);
        t14 = g->ecx;
        t15 = g->edx;
        g->ecx = t14;
        g->edx = t15;
        t16 = cow_stdcall(g, COW_IMG(0x10283270u), 0);
        t17 = g->ecx;
        t18 = g->edx;
        g->ecx = t17;
        g->edx = t18;
        t19 = cow_stdcall(g, COW_IMG(0x10282650u), 0);
        t20 = g->ecx;
        t21 = g->edx;
        g->ecx = t20;
        g->edx = t21;
        t22 = cow_stdcall(g, COW_IMG(0x10283890u), 0);
        t23 = g->ecx;
        t24 = g->edx;
        g->edx = t24;
        t25 = cow_stdcall(g, COW_IMG(0x10271810u), 0);
        t26 = g->edx;
        g->edx = t26;
        t27 = cow_thiscall(g, COW_IMG(0x10251980u), rd32(COW_IMG(0x106693fcu)), 0);
        t28 = g->edx;
        if ((uint8_t)t27 != 0u)
        {
            eax = t27;
            edx = t28;
            wr32(sp0 - 0x18u, 0xffffffffu);
            t29 = rd32(arg1 + 0x40u) - 1u;
            wr32(arg1 + 0x40u, t29);
            g->eax = eax;
            g->ecx = t29;
            g->esp = sp0 - 0x14u;
            t30 = cow_cdecl(g, COW_IMG(0x10281c40u), 1, 0xffffffffu);
            t31 = g->ecx;
            wr32(sp0 - 0x1cu, sp0 - 0x10u);
            g->ecx = t31;
            g->edx = sp0 - 0x10u;
            g->esp = sp0 - 0x18u;
            t32 = cow_cdecl(g, COW_IMG(0x10283350u), 1, sp0 - 0x10u);
            t33 = g->ecx;
            t34 = g->edx;
            d35 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, (double)(int32_t)rd32(arg1 + 0x40u) * (double)rdf32(COW_IMG(0x1033cd84u))));
            wrf32(sp0 - 0x18u, (float)d35);
            g->ecx = t33;
            g->edx = t34;
            g->esp = sp0 - 0x14u;
            t36 = cow_call_regs(g, COW_IMG(0x10282a50u), t32, g->ecx, g->edx, 1, 1, cow_f2bits(d35));
            t37 = g->ecx;
            t38 = g->edx;
            wr32(sp0 - 0x1cu, 0u);
            g->ecx = t37;
            g->esp = sp0 - 0x18u;
            t39 = cow_call_regs(g, COW_IMG(0x10282370u), g->eax, g->ecx, t38, 1, 1, 0u);
            t40 = g->ecx;
            t41 = g->edx;
            wr32(sp0 - 0x20u, 0u);
            wr32(sp0 - 0x24u, 0xffffffffu);
            wr32(sp0 - 0x28u, 0xffffffffu);
            wr32(sp0 - 0x2cu, 0u);
            wr32(sp0 - 0x30u, 0u);
            wr32(sp0 - 0x34u, 0x17fu);
            wr32(sp0 - 0x38u, 0x1bfu);
            wr32(sp0 - 0x3cu, 0u);
            wr32(sp0 - 0x40u, 0u);
            g->ecx = t40;
            g->edx = t41;
            g->esp = sp0 - 0x20u;
            t42 = cow_cdecl(g, COW_IMG(0x10280e00u), 8, 0u, 0u, 0x1bfu, 0x17fu, 0u, 0u, 0xffffffffu, 0xffffffffu);
            t43 = g->ecx;
            t44 = g->edx;
            wr32(sp0 - 0x44u, 1u);
            g->esp = sp0 - 0x40u;
            cow_call_regs(g, COW_IMG(0x10282370u), g->eax, g->ecx, t44, 1, 1, 1u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102501e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102501e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
