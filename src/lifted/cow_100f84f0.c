/* f_0x100f84f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_100f84f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(arg2 + 0xcu) != 1u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg2 + 0xcu);
        if ((uint8_t)eax == 2u)
        {
            ecx = self;
            ebx = in_ebx & 0xffffff00u;
        }
        else
        {
            if ((uint8_t)eax != 0xe9u)
            {
                ecx = self;
                ebx = in_ebx & 0xffffff00u;
            }
            else
            {
                t8 = (uint32_t)(int8_t)rd8(arg2 + 0xdu);
                t9 = (uint32_t)(int8_t)rd8(arg2 + 5u);
                g->ecx = t9;
                g->esp = sp0 - 0xcu;
                cow_cdecl(g, COW_IMG(0x100f81e0u), 3, arg1, t9, t8);
                t10 = g->ecx;
                ecx = t10;
                ebx = (in_ebx & 0xffffff00u) | 1u;
            }
        }
    }
    else
    {
        t1 = arg1 + (uint32_t)(int8_t)rd8(arg2 + 6u) * 0x48u + 0x2c7d8u;
        t2 = (uint32_t)(int8_t)rd8(arg2 + 6u);
        t3 = (uint32_t)(int8_t)rd8(arg2 + 5u);
        g->eax = t3;
        g->esp = sp0 - 0xcu;
        t4 = cow_cdecl(g, COW_IMG(0x100f80f0u), 5, arg1, t3, t2, t1, arg2 + 0x10u);
        t5 = (uint32_t)(int8_t)rd8(arg2 + 0xdu);
        t6 = (uint32_t)(int8_t)rd8(arg2 + 5u);
        g->ecx = t5;
        g->esp = sp0 - 0x20u;
        cow_cdecl(g, COW_IMG(0x100f81e0u), 3, arg1, t6, t5);
        t7 = g->ecx;
        ecx = t7;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t4;
    }
    t11 = (uint32_t)(int8_t)rd8(arg2 + 0xcu);
    t12 = rd8(arg2 + 4u);
    g->eax = t12;
    g->esp = sp0 - 0xcu;
    t13 = cow_cdecl(g, COW_IMG(0x100f8240u), 3, arg1, t12, t11);
    return (t13 & 0xffffff00u) | (uint8_t)ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f84f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f84f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
