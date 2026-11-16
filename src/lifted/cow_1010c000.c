/* f_0x1010c000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1010c000(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t4;
    uint32_t t5;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    wr32(sp0 - 0x24u, self);
    edx = in_edx;
    edi = rd32(arg1 + 0x54u);
L_1010c016: ;
    if (rd32(edi + 4u) == 0u) goto L_1010c185;
    if (rd32(edi + 8u) == 0u) goto L_1010c185;
    g->edx = edx;
    t1 = rd32(edi);
    g->esp = sp0 - 0x34u;
    t2 = cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x18u, 0);
    t3 = g->edx;
    wr32(sp0 - 0x38u, sp0 - 0x18u);
    cow_thiscall(g, COW_IMG(0x1010c4d0u), t1, 1, sp0 - 0x18u);
    wr32(sp0 - 0x38u, sp0 - 0x18u);
    g->edx = sp0 - 0x18u;
    t4 = cow_thiscall(g, COW_IMG(0x101091b0u), sp0 - 0x20u, 1, sp0 - 0x18u);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x18u, 0);
    t7 = g->edx;
    wr32(sp0 - 0x38u, COW_IMG(0x10354054u));
    g->edx = t7;
    cow_thiscall(g, COW_IMG(0x101093b0u), sp0 - 0x20u, 1, COW_IMG(0x10354054u));
    t8 = g->edx;
    if (rd32(rd32(edi) + 0xcu) != 0u)
    {
        edx = t8;
        g->edx = edx;
        t10 = rd32(edi);
        g->esp = sp0 - 0x34u;
        t11 = cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x10u, 0);
        t12 = g->edx;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        cow_thiscall(g, COW_IMG(0x1010c4d0u), t10 + 0xcu, 1, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        g->edx = sp0 - 0x10u;
        t13 = cow_thiscall(g, COW_IMG(0x101091b0u), sp0 - 8u, 1, sp0 - 0x10u);
        t14 = g->edx;
        g->edx = t14;
        cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x10u, 0);
        t15 = g->edx;
        if (rd32(sp0 - 4u) == 0u)
        {
            edx = t15;
            eax = 0u;
        }
        else
        {
            eax = rd32(sp0 - 4u);
            edx = t15;
            eax = rd32(eax + 4u);
        }
        wr32(sp0 - 0x38u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t16 = cow_thiscall(g, COW_IMG(0x101093b0u), sp0 - 0x20u, 1, eax);
        t17 = g->edx;
        g->edx = t17;
        cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 8u, 0);
        t18 = g->edx;
        edx = t18;
    }
    else
    {
        eax = rd32(edi);
        edx = t8;
        wr32(sp0 - 0x38u, COW_IMG(0x10353e0cu));
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        cow_thiscall(g, COW_IMG(0x101093b0u), sp0 - 0x20u, 1, COW_IMG(0x10353e0cu));
        t9 = g->edx;
        edx = t9;
    }
    wr32(sp0 - 0x38u, 8u);
    wr32(sp0 - 0x3cu, 0u);
    g->esp = sp0 - 0x34u;
    t19 = cow_fastcall(g, COW_IMG(0x1010c7c0u), arg2, edx, 2, 0u, 8u);
    t20 = g->edx;
    if (t19 == 0u)
    {
        eax = t19;
        edx = t20;
    }
    else
    {
        eax = t19;
        edx = t20;
        if (rd32(arg2 + 8u) == 0u)
        {
            ebx = 0u;
        }
        else
        {
            ecx = rd32(arg2 + 8u);
            ebx = eax - ecx;
        }
        wr32(sp0 - 0x38u, 4u);
        wr32(sp0 - 0x3cu, 0u);
        wr32(eax, 0xff000200u);
        g->esp = sp0 - 0x34u;
        t21 = cow_fastcall(g, COW_IMG(0x1010c7c0u), arg2, edx, 2, 0u, 4u);
        t22 = g->edx;
        if (t21 == 0u)
        {
            edx = t22;
        }
        else
        {
            edx = t22;
            esi = t21;
            wr32(sp0 - 0x38u, sp0 - 0x20u);
            wr32(sp0 - 0x3cu, arg3);
            g->esp = sp0 - 0x34u;
            t23 = cow_stdcall(g, COW_IMG(0x1010bda0u), 2, arg3, sp0 - 0x20u);
            t24 = ((rd32(esi) ^ t23) & 0x7fffffffu) ^ rd32(esi);
            wr32(esi, t24);
            t25 = (rd8(rd32(edi) + 0x18u) == 0u) << 0x1fu;
            t26 = ((t25 ^ t24) & 0x7fffffffu) ^ t25;
            wr32(esi, t26);
            edx = t26;
        }
        wr32(sp0 - 0x38u, 4u);
        wr32(sp0 - 0x3cu, 0u);
        g->esp = sp0 - 0x34u;
        t27 = cow_fastcall(g, COW_IMG(0x1010c7c0u), arg2, edx, 2, 0u, 4u);
        t28 = g->edx;
        if (t27 == 0u)
        {
            edx = t28;
        }
        else
        {
            eax = t27;
            edx = t28;
            wr32(eax, 0xff00ff00u);
        }
        t29 = rd32(arg2 + 4u) - ebx;
        wr32(ebx + rd32(arg2 + 8u) + 4u, t29);
        eax = t29;
    }
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x20u, 0);
    t30 = g->edx;
    if (rd32(edi + 8u) == 0u)
    {
        edx = t30;
    }
    else
    {
        eax = rd32(edi + 8u);
        edx = t30;
        edi = eax;
    }
    goto L_1010c016;
L_1010c185: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010c000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1010c000(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
