/* f_0x10056ef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10056ef0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    edx = in_edx;
L_10056efe: ;
    if (rd32(rd32(COW_IMG(0x1047d140u)) + 0xd50u) == 0u)
    {
        eax = rd32(COW_IMG(0x1047d140u));
        goto L_10056f4f;
    }
    eax = rd32(COW_IMG(0x1047d140u));
    esi = rd32(rd32(COW_IMG(0x1047d140u)) + 0xd50u);
L_10056f0d: ;
    if (arg1 == 0u) goto L_10056f1c;
    if (rd32(esi + 0x18u) != rd32(rd32(arg1 + 0x70u) + 0x78u))
    {
        edx = rd32(esi + 0x18u);
        goto L_10056f48;
    }
    edx = rd32(esi + 0x18u);
L_10056f1c: ;
    if (rd32(esi + 0x1cu) != 0x4d730000u) goto L_10056f48;
    if (rd32(esi + 0x80u) != rd32(self + 0x14u))
    {
        eax = rd32(self + 0x14u);
        goto L_10056f48;
    }
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10062770u), esi, 0);
    t2 = g->edx;
    if (t1 != arg1)
    {
        eax = t1;
        edx = t2;
        goto L_10056f48;
    }
    edx = t2;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x100627d0u), esi, 0);
    t4 = g->edx;
    if (t3 == arg2)
    {
        edx = t4;
        goto L_10056f56;
    }
    eax = t3;
    edx = t4;
L_10056f48: ;
    if (rd32(esi + 0xcu) != 0u)
    {
        esi = rd32(esi + 0xcu);
        goto L_10056f0d;
    }
L_10056f4f: ;
    return eax;
L_10056f56: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(esi) + 0x18u), esi, 1, 1u);
    t5 = g->edx;
    edx = t5;
    goto L_10056efe;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10056ef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10056ef0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
