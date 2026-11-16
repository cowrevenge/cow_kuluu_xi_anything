/* f_0x10116c90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10116c90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 140u);

    wr32(sp0 - 0x6cu, in_edi);
    if (rd32(arg1) > 0xfc0u)
    {
        eax = 0xffffffffu;
    }
    else
    {
        ecx = rd32(arg1);
        if (ecx < 0x1cu)
        {
            eax = 0xffffffffu;
        }
        else
        {
            wr32(sp0 - 0x70u, in_esi);
            wr32(arg1 + 0xcu, 0u);
            wr32(sp0 - 0x74u, sp0 - 0x58u);
            wr32(arg1 + 0x10u, 0u);
            wr32(arg1 + 0x14u, 0u);
            wr32(arg1 + 0x18u, 0u);
            g->edx = sp0 - 0x58u;
            g->esp = sp0 - 0x70u;
            cow_cdecl(g, COW_IMG(0x100d7420u), 1, sp0 - 0x58u);
            t1 = g->edx;
            wr32(sp0 - 0x78u, rd32(arg1));
            wr32(sp0 - 0x7cu, arg1);
            wr32(sp0 - 0x80u, sp0 - 0x58u);
            g->ecx = sp0 - 0x58u;
            g->esp = sp0 - 0x74u;
            cow_cdecl(g, COW_IMG(0x100d7450u), 3, sp0 - 0x58u, arg1, rd32(arg1));
            t2 = g->ecx;
            wr32(sp0 - 0x84u, sp0 - 0x58u);
            wr32(sp0 - 0x88u, sp0 - 0x68u);
            g->esp = sp0 - 0x78u;
            cow_cdecl(g, COW_IMG(0x100d7560u), 4, sp0 - 0x68u, sp0 - 0x58u, sp0 - 0x58u, arg1);
            t3 = rd32(sp0 - 0x68u);
            t4 = rd32(sp0 - 0x60u);
            t5 = rd32(sp0 - 0x64u);
            wr32(arg1 + 0xcu, t3);
            t6 = rd32(sp0 - 0x5cu);
            wr32(arg1 + 0x10u, t5);
            wr32(arg1 + 0x14u, t4);
            wr32(arg1 + 0x18u, t6);
            eax = 0u;
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10116c90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10116c90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
