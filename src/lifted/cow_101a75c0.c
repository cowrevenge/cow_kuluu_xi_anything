/* f_0x101a75c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101a75c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t18;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u)
    {
        g->ecx = self;
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x101a74f0u), g->eax, g->ecx, in_edx, 1, 2, arg1 + 0x10u, 2u);
        t1 = g->ecx;
        t2 = g->edx;
        g->edx = t2;
        t3 = cow_stdcall(g, COW_IMG(0x100e5290u), 0);
        t4 = g->edx;
        edx = t4;
        ebp = 0u;
        esi = t3;
L_101a75e2: ;
        if (esi == 0u) goto L_101a7647;
        t5 = rd8(arg1 + rd32(esi) * 4u + 0x10u);
        wr8(arg1 + rd32(esi) * 4u + 0x10u, (t5 & 0xfdu) | 1u);
        t6 = rd32(esi);
        t7 = rd8(arg1 + rd32(esi) * 4u + 0x10u);
        t8 = rd8(esi + 5u);
        wr8(arg1 + t6 * 4u + 0x10u, (uint8_t)((t7 & 3u) ^ t8 << 2u));
        t9 = rd8(esi + 4u);
        wr8(arg1 + rd32(esi) * 4u + 0x11u, (uint8_t)t9);
        t10 = (edx & 0xffffff00u) | rd8(esi + 4u);
        t11 = rd8(esi + 5u);
        g->ecx = (arg1 + t6 * 4u + 0x10u & 0xffffff00u) | t9;
        g->edx = t10;
        g->esp = sp0 - 0xcu;
        t12 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, t11, t10);
        t13 = g->ecx;
        t14 = g->edx;
        if (t12 == 0u)
        {
            ecx = t13;
            edx = t14;
        }
        else
        {
            eax = t12;
            edx = t14;
            t15 = rd32(esi);
            t16 = rd16(eax);
            wr16(arg1 + t15 * 4u + 0x12u, (uint16_t)t16);
            ecx = t15;
            edx = (edx & 0xffff0000u) | t16;
        }
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t17 = cow_stdcall(g, COW_IMG(0x100e52c0u), 0);
        t18 = g->edx;
        if ((int32_t)(ebp + 1u) < 16)
        {
            edx = t18;
            ebp = ebp + 1u;
            esi = t17;
            goto L_101a75e2;
        }
    }
L_101a7647: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a75c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a75c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
