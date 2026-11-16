/* f_0x10292200 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10292200(Guest* g)
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
    uint32_t t2;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg4 != 0u) goto L_1029222f;
    g->eax = arg4;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb100u));
    t2 = g->ecx;
    t3 = g->edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb180u), COW_IMG(0x103b379cu));
    return 0u;
L_1029222f: ;
    if (arg1 != 0u) goto L_1029225b;
    g->eax = arg4;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb100u));
    t5 = g->ecx;
    t6 = g->edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb158u), COW_IMG(0x103b379cu));
    return 0u;
L_1029225b: ;
    if (arg2 == 0u) goto L_102922f4;
    if (arg3 == 0u) goto L_102922f4;
    g->esp = sp0 - 0xcu;
    t7 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, arg3, arg2, COW_IMG(0x103bb100u), 0x6eu, in_ebx);
    esi = arg1;
    edi = t7;
    ecx = arg2 * arg3 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = arg2 * arg3 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    if (rd8(COW_IMG(0x109a2828u)) == 0u)
    {
        eax = arg2 * arg3;
        ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x109a2828u));
        edx = arg2 * arg3;
        ebx = t7;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x109a2828u));
        ebx = t7;
        g->ecx = ecx;
        g->esp = sp0 - 8u;
        t8 = cow_call_regs(g, COW_IMG(0x102924e0u), arg2 * arg3, g->ecx, arg2 * arg3, 1, 4, ebx, arg2 * arg3, in_ebx, in_edi);
        t9 = g->ecx;
        t10 = g->edx;
        eax = t8;
        ecx = t9;
        edx = t10;
    }
    if (rd8(COW_IMG(0x109f8268u)) != 0u)
    {
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10292150u), 3, ebx, arg2, arg3);
    }
    g->ecx = arg4;
    g->esp = sp0 - 8u;
    t11 = cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, arg2, 1, 6, ebx, arg2, arg3, arg4, in_ebx, in_edi);
    t12 = g->ecx;
    t13 = g->edx;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebx, COW_IMG(0x103bb100u), 0x78u);
    return t11;
L_102922f4: ;
    g->eax = arg4;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t14 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb100u));
    t15 = g->ecx;
    t16 = g->edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb128u), COW_IMG(0x103b379cu));
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10292200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10292200(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
