/* f_0x102441e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102441e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t3;
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
    cow_frame(g, sp0, 300u);

    wr32(sp0 - 0x108u, in_esi);
    wr32(sp0 - 0x10cu, in_edi);
    if (rd32(arg1 + 0xcu) != 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(arg1 + 0xcu);
        wr32(sp0 - 0x110u, 0x18u);
        g->eax = eax;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x10cu;
        t1 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x18u);
        t2 = g->ecx;
        t3 = g->edx;
        if (t1 == 0u)
        {
            edx = t3;
            edi = 0u;
        }
        else
        {
            eax = t1;
            ecx = t2;
            edi = t1;
            t4 = rd32(arg1 + 4u);
            wr8(sp0 - 0x104u, (uint8_t)arg3 != rd8(COW_IMG(0x10669091u)));
            t5 = rd32(arg1 + 0x10u);
            t6 = rd32(sp0 - 0x104u);
            wr32(edi, COW_IMG(0x1033cb80u));
            wr32(sp0 - 0x110u, t6);
            wr32(sp0 - 0x114u, arg2);
            wr32(sp0 - 0x118u, t4);
            wr32(sp0 - 0x11cu, t5);
            g->edx = arg2;
            g->esp = sp0 - 0x10cu;
            cow_thiscall(g, COW_IMG(0x102117e0u), edi, 4, t5, t4, arg2, t6);
            t7 = g->edx;
            edx = t7;
        }
        wr32(arg1 + 0xcu, edi);
    }
    wr32(sp0 - 0x110u, in_ebx);
    wr32(sp0 - 0x114u, in_ebp);
    wr32(sp0 - 0x118u, 0x100u);
    wr32(sp0 - 0x11cu, sp0 - 0x100u);
    wr32(sp0 - 0x120u, 0u);
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 0u);
    g->eax = sp0 - 0x100u;
    g->edx = edx;
    t8 = rd32(arg1 + 0xcu);
    g->esp = sp0 - 0x114u;
    t9 = cow_thiscall(g, COW_IMG(0x10211c60u), t8, 5, 0u, 0u, 0u, sp0 - 0x100u, 0x100u);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 == 0u)
    {
        ecx = t10;
        edx = t11;
        goto L_102442ca;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    ebx = 0u;
    ebp = t9;
L_10244264: ;
    wr32(sp0 - 0x118u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10cu;
    t12 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, ebp, rd32(sp0 - 0x114u), rd32(sp0 - 0x110u));
    t13 = g->edx;
    wr32(sp0 - 0x118u, 0x100u);
    wr32(sp0 - 0x11cu, sp0 - 0x100u);
    wr32(sp0 - 0x120u, ebx);
    wr32(sp0 - 0x124u, ebp);
    wr32(sp0 - 0x128u, t12);
    g->esp = sp0 - 0x114u;
    t14 = cow_thiscall(g, COW_IMG(0x10211c60u), rd32(arg1 + 0xcu), 5, t12, ebp, ebx, sp0 - 0x100u, 0x100u);
    wr32(sp0 - 0x118u, arg3);
    t15 = rd32(arg1 + 8u);
    wr32(sp0 - 0x11cu, t15);
    wr32(sp0 - 0x120u, t14);
    wr32(sp0 - 0x124u, t12);
    wr32(sp0 - 0x128u, sp0 - 0x100u);
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x10cu;
    t16 = cow_thiscall_cdecl(g, COW_IMG(0x102442f0u), t15, 7, sp0 - 0x100u, t12, t14, t15, arg3, rd32(sp0 - 0x114u), rd32(sp0 - 0x110u));
    t17 = g->ecx;
    t18 = g->edx;
    if (t12 == 0u)
    {
        edx = t18;
    }
    else
    {
        eax = t16;
        ecx = t17;
        edx = t18;
        edi = t12;
        wr32(sp0 - 0x118u, edi);
        g->esp = sp0 - 0x114u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, edi);
        t19 = g->edx;
        edx = t19;
    }
    wr32(sp0 - 0x118u, 0x100u);
    wr32(sp0 - 0x11cu, sp0 - 0x100u);
    wr32(sp0 - 0x120u, ebx + 1u);
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, 0u);
    g->eax = sp0 - 0x100u;
    g->edx = edx;
    t20 = rd32(arg1 + 0xcu);
    g->esp = sp0 - 0x114u;
    t21 = cow_thiscall(g, COW_IMG(0x10211c60u), t20, 5, 0u, 0u, ebx + 1u, sp0 - 0x100u, 0x100u);
    t22 = g->ecx;
    t23 = g->edx;
    if (t21 != 0u)
    {
        eax = t21;
        ecx = t22;
        edx = t23;
        ebx = ebx + 1u;
        ebp = t21;
        goto L_10244264;
    }
    ecx = t22;
    edx = t23;
L_102442ca: ;
    if (rd32(arg1 + 0xcu) == 0u)
    {
        eax = rd32(arg1 + 0xcu);
        ebx = rd32(sp0 - 0x110u);
        ebp = rd32(sp0 - 0x114u);
    }
    else
    {
        eax = rd32(arg1 + 0xcu);
        ebx = rd32(sp0 - 0x110u);
        ebp = rd32(sp0 - 0x114u);
        wr32(sp0 - 0x110u, eax);
        g->eax = eax;
        g->esp = sp0 - 0x10cu;
        t24 = cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, eax);
        wr32(arg1 + 0xcu, 0u);
        eax = t24;
    }
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x108u);
    g->edi = rd32(sp0 - 0x10cu);
    g->ebp = ebp;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102441e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102441e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
