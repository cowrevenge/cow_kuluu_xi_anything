/* f_0x100f86e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_100f86e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(arg2 + 0xcu) != 1u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg2 + 0xcu);
        loc_4 = self & 0xffffffu;
    }
    else
    {
        t1 = (uint32_t)(int8_t)rd8(arg2 + 6u);
        t2 = (uint32_t)(int8_t)rd8(arg2 + 5u);
        g->edx = in_edx;
        g->esp = sp0 - 0x14u;
        t3 = cow_cdecl(g, COW_IMG(0x100f8270u), 3, arg1, t2, t1);
        t4 = g->edx;
        if (t3 == 0u)
        {
            eax = t3;
            loc_4 = self & 0xffffffu;
        }
        else
        {
            eax = t3;
            edx = t4;
            ebx = t2;
            ebp = t1;
            g->ecx = arg2 + 0x10u;
            g->esp = sp0 - 0x14u;
            t5 = cow_cdecl(g, COW_IMG(0x100f80f0u), 5, arg1, ebx, ebp, eax, arg2 + 0x10u);
            t6 = g->ecx;
            t7 = (uint32_t)(int8_t)rd8(arg2 + 0xdu);
            t8 = (uint32_t)(int8_t)rd8(arg2 + 5u);
            g->eax = t8;
            g->esp = sp0 - 0x28u;
            t9 = cow_cdecl(g, COW_IMG(0x100f81e0u), 3, arg1, t8, t7);
            eax = t9;
            loc_4 = (self & 0xffffffu) | (uint8_t)t5 << 0x18u;
        }
    }
    t10 = (uint32_t)(int8_t)rd8(arg2 + 0xcu);
    t11 = rd8(arg2 + 4u);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t12 = cow_cdecl(g, COW_IMG(0x100f8240u), 3, arg1, t11, t10);
    return (t12 & 0xffffff00u) | loc_4 >> 0x18u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f86e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f86e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
