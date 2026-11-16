/* f_0x100c2d00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100c2d00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 == 0u) goto L_100c2d6c;
    eax = arg1;
    ecx = arg2;
    edx = in_edx;
L_100c2d0d: ;
    if (rd8(ecx) == 0u) goto L_100c2d70;
    edx = (edx & 0xffffff00u) | rd8(ecx);
    sf = (int8_t)rd8(ecx) < 0;
    if (!sf) goto L_100c2d19;
    wr8(eax, (uint8_t)edx);
L_100c2d5f: ;
    eax = eax + 1u;
    edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
    ecx = ecx + 1u;
L_100c2d64: ;
    wr8(eax, (uint8_t)edx);
    if (ecx + 1u != 0u)
    {
        eax = eax + 1u;
        ecx = ecx + 1u;
        goto L_100c2d0d;
    }
L_100c2d6c: ;
    return 0u;
L_100c2d19: ;
    if ((uint8_t)edx != 0x7fu) goto L_100c2d64;
    if (rd8(ecx + 1u) - 0x31u > 0x86u)
    {
        edx = rd8(ecx + 1u);
        goto L_100c2d5c;
    }
    esi = rd8(ecx + 1u) - 0x31u;
    t1 = rd32(COW_IMG(0x100c2d78u) + rd8(COW_IMG(0x100c2d88u) + esi) * 4u);
    edx = rd8(COW_IMG(0x100c2d88u) + esi);
    switch (t1 - RD)
    {
    case 0x100c2d3du: goto L_100c2d3d;
    case 0x100c2d49u: goto L_100c2d49;
    case 0x100c2d5cu: goto L_100c2d5c;
    default: rt_fatal(g, COW_IMG(0x100c2d36u), "switch");
    }
    return 0;
L_100c2d3d: ;
    wr8(eax, 0x7fu);
    t4 = rd8(ecx + 1u);
    wr8(eax + 1u, (uint8_t)t4);
    eax = eax + 1u;
    ecx = ecx + 1u;
    edx = (edx & 0xffffff00u) | t4;
    goto L_100c2d5f;
L_100c2d49: ;
    wr8(eax, 0x7fu);
    t2 = rd8(ecx + 1u);
    wr8(eax + 1u, (uint8_t)t2);
    t3 = rd8(ecx + 2u);
    wr8(eax + 2u, (uint8_t)t3);
    eax = eax + 2u;
    ecx = ecx + 2u;
    edx = ((edx | t2) & 0xffffff00u) | t3;
    goto L_100c2d5f;
L_100c2d5c: ;
    wr8(eax, 0x7fu);
    goto L_100c2d5f;
L_100c2d70: ;
    wr8(eax, rd8(ecx));
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c2d00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100c2d00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
