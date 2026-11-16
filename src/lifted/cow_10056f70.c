/* f_0x10056f70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10056f70(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    edx = in_edx;
L_10056f7c: ;
    if (rd32(rd32(COW_IMG(0x1047d140u)) + 0xd50u) == 0u)
    {
        eax = rd32(COW_IMG(0x1047d140u));
        goto L_10056fcb;
    }
    eax = rd32(COW_IMG(0x1047d140u));
    esi = rd32(rd32(COW_IMG(0x1047d140u)) + 0xd50u);
L_10056f8b: ;
    if (rd32(esi + 0x18u) != rd32(rd32(arg1 + 0x70u) + 0x78u))
    {
        edx = rd32(esi + 0x18u);
        goto L_10056fc4;
    }
    edx = rd32(esi + 0x18u);
    if (rd32(esi + 0x1cu) != 0x4d730000u) goto L_10056fc4;
    if (rd32(esi + 0x80u) != rd32(self + 0x14u))
    {
        eax = rd32(self + 0x14u);
        goto L_10056fc4;
    }
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10062770u), esi, 0);
    t2 = g->edx;
    if (t1 != arg1)
    {
        eax = t1;
        edx = t2;
        goto L_10056fc4;
    }
    edx = t2;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x100627d0u), esi, 0);
    t4 = g->edx;
    if (t3 == arg2) goto L_10056fd2;
    eax = t3;
    edx = t4;
L_10056fc4: ;
    if (rd32(esi + 0xcu) != 0u)
    {
        esi = rd32(esi + 0xcu);
        goto L_10056f8b;
    }
L_10056fcb: ;
    g->edx = edx;
    return eax;
L_10056fd2: ;
    if (rd32(rd32(COW_IMG(0x1047d140u)) + 0xd50u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1047d140u)) + 0xd50u);
        goto L_10056ff3;
    }
    eax = rd32(rd32(COW_IMG(0x1047d140u)) + 0xd50u);
L_10056fe1: ;
    if (rd32(eax + 0x10u) == esi)
    {
        wr32(eax + 0x10u, 0u);
        wr32(eax + 0x28u, 0u);
    }
    if (rd32(eax + 0xcu) != 0u)
    {
        eax = rd32(eax + 0xcu);
        goto L_10056fe1;
    }
    eax = rd32(eax + 0xcu);
L_10056ff3: ;
    wr32(esi + 0x24u, 0u);
    g->edx = rd32(esi);
    t5 = rd32(esi);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(t5 + 0x18u), esi, 1, 1u);
    t6 = g->edx;
    edx = t6;
    goto L_10056f7c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10056f70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10056f70(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
