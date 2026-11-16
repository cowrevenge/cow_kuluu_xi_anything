/* f_0x10138700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10138700(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(COW_IMG(0x105781dcu)) & 1u) goto L_101387e5;
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x105781dcu));
    wr8(COW_IMG(0x105781dcu), (uint8_t)(eax | 1u));
    if ((rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) & 0x80u) == 0u)
    {
        eax = rd32(COW_IMG(0x10456a28u));
        ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    }
    else
    {
        eax = rd32(COW_IMG(0x10456a28u));
        ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        if (ecx == 2u) goto L_1013872d;
        if (ecx != 3u) goto L_10138732;
L_1013872d: ;
        ecx = 1u;
    }
L_10138732: ;
    wr8(COW_IMG(0x1036f94eu), (uint8_t)((ecx != 0u) + 9u));
    if ((rd8(eax + 0x18u) & 0x80u) == 0u)
    {
        ecx = rd32(eax + 8u);
    }
    else
    {
        ecx = rd32(eax + 8u);
        if (ecx == 2u) goto L_10138752;
        if (ecx != 3u) goto L_10138757;
L_10138752: ;
        ecx = 1u;
    }
L_10138757: ;
    wr8(COW_IMG(0x1036f94fu), (uint8_t)((ecx != 0u) + 7u));
    if ((rd8(eax + 0x18u) & 0x80u) == 0u)
    {
        ecx = rd32(eax + 8u);
    }
    else
    {
        ecx = rd32(eax + 8u);
        if (ecx == 2u) goto L_10138777;
        if (ecx != 3u) goto L_1013877c;
L_10138777: ;
        ecx = 1u;
    }
L_1013877c: ;
    wr8(COW_IMG(0x1036f950u), (uint8_t)((ecx == 0u) + 9u));
    if ((rd8(eax + 0x18u) & 0x80u) == 0u)
    {
        ecx = rd32(eax + 8u);
    }
    else
    {
        ecx = rd32(eax + 8u);
        if (ecx == 2u) goto L_1013879c;
        if (ecx != 3u) goto L_101387a1;
L_1013879c: ;
        ecx = 1u;
    }
L_101387a1: ;
    wr8(COW_IMG(0x1036f952u), 6u);
    wr8(COW_IMG(0x1036f956u), 0xbu);
    wr8(COW_IMG(0x1036f957u), 0xbu);
    wr8(COW_IMG(0x1036f951u), (uint8_t)((ecx == 0u) + 7u));
    wr8(COW_IMG(0x1036f953u), 9u);
    wr8(COW_IMG(0x1036f954u), 5u);
    wr8(COW_IMG(0x1036f955u), 0xau);
    return COW_IMG(0x1036f940u) + arg1 * 2u;
L_101387e5: ;
    return COW_IMG(0x1036f940u) + arg1 * 2u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10138700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10138700(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
