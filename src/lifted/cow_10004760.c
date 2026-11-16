/* f_0x10004760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10004760(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 324u);

    wr32(sp0 - 0x108u, in_esi);
    wr32(sp0 - 0x10cu, in_edi);
    if (rd32(COW_IMG(0x10455afcu)) == 0u)
    {
        eax = rd32(COW_IMG(0x10455afcu));
        edx = in_edx;
        goto L_10004821;
    }
    eax = rd32(COW_IMG(0x10455afcu));
    if (eax == 1u) goto L_10004784;
    eax = eax - 1u;
    return eax & 0xffffff00u;
L_10004784: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u) != 0u)
    {
        eax = rd16(arg3 + 8u);
        edx = in_edx;
    }
    else
    {
        t1 = rd32(COW_IMG(0x10455b00u)) + 1u;
        t2 = rd32(COW_IMG(0x10455b00u));
        wr32(COW_IMG(0x10455b00u), t1);
        t3 = rd16(arg3 + 8u);
        wr32(sp0 - 0x110u, t3);
        wr32(sp0 - 0x114u, t2);
        wr32(sp0 - 0x118u, COW_IMG(0x1034f800u));
        wr32(sp0 - 0x11cu, sp0 - 0x104u);
        g->edx = t3;
        g->esp = sp0 - 0x108u;
        t4 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x104u, COW_IMG(0x1034f800u), t2, t3, in_edi);
        t5 = g->edx;
        wr32(sp0 - 0x120u, sp0 - 0x104u);
        g->esp = sp0 - 0x11cu;
        t6 = cow_call_regs(g, COW_IMG(0x10004dd0u), g->eax, sp0 - 0x104u, t5, 1, 1, sp0 - 0x104u);
        t7 = g->ecx;
        wr32(sp0 - 0x124u, COW_IMG(0x1034f7fcu));
        wr32(sp0 - 0x128u, sp0 - 0x104u);
        g->ecx = t7;
        g->edx = sp0 - 0x104u;
        g->esp = sp0 - 0x114u;
        t8 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, sp0 - 0x104u, COW_IMG(0x1034f7fcu), sp0 - 0x104u, sp0 - 0x104u, COW_IMG(0x1034f800u));
        t9 = g->ecx;
        t10 = g->edx;
        if (t8 == 0u)
        {
            eax = t8;
            edx = t10;
        }
        else
        {
            ecx = t9;
            edx = t10;
            esi = t8;
            wr32(sp0 - 0x110u, esi);
            wr32(sp0 - 0x114u, 1u);
            wr32(sp0 - 0x118u, 0x40e38u);
            wr32(sp0 - 0x11cu, arg1);
            g->esp = sp0 - 0x104u;
            cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, edx, 1, 6, arg1, 0x40e38u, 1u, esi, rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u));
            t11 = g->edx;
            wr32(sp0 - 0x120u, esi);
            wr32(sp0 - 0x124u, 1u);
            wr32(sp0 - 0x128u, 0x1cu);
            wr32(sp0 - 0x12cu, arg2);
            g->ecx = arg2;
            g->esp = sp0 - 0x114u;
            cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, t11, 1, 6, arg2, 0x1cu, 1u, esi, arg1, 0x40e38u);
            t12 = g->ecx;
            t13 = g->edx;
            wr32(sp0 - 0x130u, esi);
            wr32(sp0 - 0x134u, 1u);
            wr32(sp0 - 0x138u, 0x48u);
            wr32(sp0 - 0x13cu, arg3);
            g->ecx = t12;
            g->esp = sp0 - 0x124u;
            cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, t13, 1, 6, arg3, 0x48u, 1u, esi, arg2, 0x1cu);
            t14 = g->ecx;
            t15 = g->edx;
            wr32(sp0 - 0x140u, esi);
            g->edi = arg3;
            g->esp = sp0 - 0x134u;
            t16 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t15, 1, 3, esi, arg3, 0x48u);
            t17 = g->edx;
            eax = t16;
            edx = t17;
        }
    }
L_10004821: ;
    g->edi = in_edi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10004760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10004760(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
