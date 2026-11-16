/* f_0x100a0180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a0180(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    eax = arg3 + 0x10u;
    ecx = self;
    edx = 0u;
    ebx = arg3 + 8u;
    ebp = arg3 + 0x70u;
    loc_4 = arg3 + 0x10u;
L_100a0198: ;
    if (rd8(arg3 + edx + 4u) != 0xfeu)
    {
        eax = (eax & 0xffffff00u) | rd8(arg3 + edx + 4u);
        if ((int8_t)eax >= 0)
        {
            if ((int8_t)eax < 16)
            {
                wr16(COW_IMG(0x10488b08u) + (uint32_t)(int8_t)eax * 0x20u, rd16(ebx));
                esi = loc_4;
                edi = COW_IMG(0x10488b0cu) + (uint32_t)(int8_t)eax * 0x20u;
                ecx = 6u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                wr32(COW_IMG(0x10488b24u) + (uint32_t)(int8_t)eax * 0x20u, rd32(ebp));
                eax = (uint32_t)(int8_t)eax << 5u;
            }
        }
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(arg3 + edx + 4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t1 = cow_stdcall(g, COW_IMG(0x10093b50u), 0);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    if ((int32_t)(edx + 1u) < 4)
    {
        ecx = loc_4 + 0x18u;
        edx = edx + 1u;
        ebx = ebx + 2u;
        ebp = ebp + 4u;
        loc_4 = loc_4 + 0x18u;
        goto L_100a0198;
    }
    edx = edx + 1u;
    loc_4 = loc_4 + 0x18u;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a0180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a0180(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
