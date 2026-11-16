/* f_0x10202b80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10202b80(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(COW_IMG(0x106643a0u) + arg1) == 0xfu)
    {
        wr8(COW_IMG(0x106643a0u) + arg1, rd8(arg2 + 0x34u) & 3u);
    }
    t1 = arg1 * 6u + (uint32_t)(int8_t)rd8(COW_IMG(0x106643a3u) + arg1);
    t2 = rd8(COW_IMG(0x106643a3u) + arg1);
    wr32(COW_IMG(0x10663ad8u) + t1 * 0x7cu, COW_IMG(0x10664390u));
    esi = arg2;
    edi = COW_IMG(0x10663adcu) + t1 * 0x7cu;
    ecx = 0x1cu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t3 = rd32(COW_IMG(0x10663b4cu) + t1 * 0x7cu);
    t4 = rd32(COW_IMG(0x10663af0u) + t1 * 0x7cu);
    wr8(COW_IMG(0x10663b52u) + t1 * 0x7cu, 1u);
    if (t4 == t3)
    {
        eax = COW_IMG(0x10663ad8u) + t1 * 0x7cu;
        ebx = (in_ebx & 0xffffff00u) | t2;
    }
    else
    {
        eax = COW_IMG(0x10663ad8u) + t1 * 0x7cu;
        ecx = t3;
        ebx = (in_ebx & 0xffffff00u) | t2;
        esi = t4;
        wr32(eax + 0x74u, esi);
        wr8(eax + 0x78u, 0u);
        wr8(eax + 0x79u, 0u);
    }
    wr8(COW_IMG(0x106643a3u) + arg1, (uint8_t)((uint8_t)ebx + 1u));
    if ((rd8(arg2 + 0x34u) & 8u) != 0u)
    {
        t5 = rd32(arg2 + 0x14u);
        wr32(COW_IMG(0x10664390u), t5);
    }
    if ((rd8(arg2 + 0x34u) & 4u) != 0u)
    {
        t6 = rd32(arg2 + 0x14u);
        wr32(COW_IMG(0x10664394u) + arg1 * 4u, t6);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10202b80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10202b80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
