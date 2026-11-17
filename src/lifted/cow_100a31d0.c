/* f_0x100a31d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100a31d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    cow_frame(g, sp0, 284u);

    t1 = rd32(COW_IMG(0x103601bcu));
    wr8(sp0 - 0x104u, 0xc8u);
    wr8(sp0 - 0x103u, 0u);
    wr8(sp0 - 0x102u, 0u);
    if (t1 != 0u)
    {
        ecx = t1;
        t2 = rd32(ecx + 0x80u);
        wr32(sp0 - 0x108u, t2);
        g->eax = t2;
        g->ecx = ecx;
        g->edx = in_edx;
        g->esp = sp0 - 0x104u;
        t3 = cow_stdcall(g, COW_IMG(0x100db7a0u), 1, t2);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 != 0u)
        {
            eax = t3;
            ecx = t4;
            edx = t5;
            wr32(sp0 - 0x108u, eax);
            wr32(sp0 - 0x10cu, 0x22u);
            wr32(sp0 - 0x110u, 0xau);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x108u;
            t6 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x22u);
            t7 = g->ecx;
            t8 = g->edx;
            wr32(sp0 - 0x10cu, t6);
            wr32(sp0 - 0x110u, sp0 - 0x100u);
            g->esp = sp0 - 0xfcu;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t6, rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u));
            if (rd32(COW_IMG(0x10578158u)) != 0u)
            {
                ecx = rd32(COW_IMG(0x10578158u));
                wr32(sp0 - 0x108u, 0u);
                wr32(sp0 - 0x10cu, 1u);
                wr32(sp0 - 0x110u, 0u);
                wr32(sp0 - 0x114u, sp0 - 0x104u);
                wr32(sp0 - 0x118u, sp0 - 0x100u);
                g->esp = sp0 - 0x104u;
                cow_thiscall(g, COW_IMG(0x10127c00u), ecx, 5, sp0 - 0x100u, sp0 - 0x104u, 0u, 1u, 0u);
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a31d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100a31d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
