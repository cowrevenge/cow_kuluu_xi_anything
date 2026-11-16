/* f_0x100e43f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e43f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        eax = in_eax;
    }
    else
    {
        if (rd32(arg1 + 0x2d000u) != 0u)
        {
            eax = rd32(arg1 + 0x2d000u);
            g->esp = sp0;
            cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, self, in_edx, 1, 3, eax, in_esi, in_ebx);
            wr32(arg1 + 0x2d000u, 0u);
            wr16(arg1 + 0x2cffeu, 0u);
            wr16(arg1 + 0x2cffcu, 0u);
        }
        wr32(arg1 + 0x2cffcu, 0u);
        edi = arg1 + 0x2d010u;
        eax = 0u;
        ecx = 0x180u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        t1 = rd8(arg1 + 0x40db5u);
        wr32(arg1 + 0x2d610u, 0u);
        wr8(arg1 + 0x40db5u, t1 & 0xfeu);
        edi = arg1 + 0x2d614u;
        ecx = 9u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        t2 = rd8(arg1 + 0x40db5u);
        wr32(arg1 + 0x2d678u, 0u);
        wr8(arg1 + 0x40db5u, t2 & 0xefu);
        eax = ((eax | t2) & 0xffffff00u) | (t2 & 0xefu);
    }
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e43f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e43f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
