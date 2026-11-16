/* f_0x10271d90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10271d90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x1099b128u)) != 0xdu)
    {
        g->esp = sp0;
        cow_stdcall(g, COW_IMG(0x10271d20u), 0);
    }
    t1 = rd32(COW_IMG(0x103b1c30u) + arg1 * 0x24u);
    t2 = rd32(COW_IMG(0x103b1c2cu) + arg1 * 0x24u);
    t3 = rd32(COW_IMG(0x103b1c28u) + arg1 * 0x24u);
    t4 = rd32(COW_IMG(0x103b1c24u) + arg1 * 0x24u);
    t5 = rd32(COW_IMG(0x103b1c20u) + arg1 * 0x24u);
    t6 = rd32(COW_IMG(0x103b1c1cu) + arg1 * 0x24u);
    t7 = rd32(COW_IMG(0x103b1c18u) + arg1 * 0x24u);
    t8 = rd32(COW_IMG(0x103b1c14u) + arg1 * 0x24u);
    t9 = rd32(COW_IMG(0x103b1c10u) + arg1 * 0x24u);
    g->ecx = t7;
    g->edx = t8;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10271cc0u), 9, t9, t8, t7, t6, t5, t4, t3, t2, t1);
    t10 = g->ecx;
    t11 = g->edx;
    if ((rd32(COW_IMG(0x1099b0d8u)) >> 8u & 2u) != 0u)
    {
        eax = rd32(COW_IMG(0x1099b0d8u));
        ecx = t10;
        edx = t11;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t12 = cow_cdecl(g, COW_IMG(0x10271300u), 5, 0u, 0u, 0u, 0u, 1u);
        t13 = g->ecx;
        t14 = g->edx;
        g->esp = sp0 - 0x18u;
        cow_cdecl(g, COW_IMG(0x10271300u), 5, 0u, 0u, 0u, 0u, 1u);
    }
    wr32(COW_IMG(0x1099b128u), arg1);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10271d90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10271d90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
