/* f_0x10015fc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=5 */
uint32_t cow_fn_10015fc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 168u);

    wr32(sp0 - 0x9cu, in_edi);
    edi = sp0 - 0x94u;
    eax = 0u;
    ecx = 0x25u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x94u, 0x94u);
    wr32(sp0 - 0xa0u, sp0 - 0x94u);
    g->esp = sp0 - 0x9cu;
    cow_thiscall(g, rd32(COW_IMG(0x103291a8u)), ecx, 1, sp0 - 0x94u);
    if (rd32(sp0 - 0x84u) != 1u)
    {
        eax = rd32(sp0 - 0x84u);
        goto L_10016027;
    }
    if (rd32(sp0 - 0x90u) <= arg1)
    {
        eax = rd32(sp0 - 0x90u);
        zf = rd32(sp0 - 0x90u) == arg1;
        goto L_10016009;
    }
    eax = rd32(sp0 - 0x90u);
    return (eax & 0xffffff00u) | 1u;
L_10016009: ;
    if (!zf) goto L_1001609c;
    if (rd32(sp0 - 0x8cu) < arg2)
    {
        eax = arg2;
        goto L_1001609c;
    }
    return (arg2 & 0xffffff00u) | 1u;
L_10016027: ;
    if (eax != 2u) goto L_1001609c;
    if (rd32(sp0 - 0x90u) <= arg3)
    {
        eax = rd32(sp0 - 0x90u);
        zf = rd32(sp0 - 0x90u) == arg3;
        goto L_10016044;
    }
    eax = rd32(sp0 - 0x90u);
    return (eax & 0xffffff00u) | 1u;
L_10016044: ;
    if (!zf) goto L_1001609c;
    if (rd32(sp0 - 0x8cu) <= arg4)
    {
        eax = rd32(sp0 - 0x8cu);
        zf = rd32(sp0 - 0x8cu) == arg4;
        goto L_1001605e;
    }
    eax = rd32(sp0 - 0x8cu);
    return (eax & 0xffffff00u) | 1u;
L_1001605e: ;
    if (!zf) goto L_1001609c;
    wr32(sp0 - 0x9cu, sp0 - 0x98u);
    wr32(sp0 - 0xa0u, COW_IMG(0x1035069cu));
    wr32(sp0 - 0xa4u, sp0 - 0x80u);
    wr32(sp0 - 0x98u, 0u);
    g->eax = sp0 - 0x80u;
    g->esp = sp0 - 0x98u;
    t1 = cow_cdecl(g, COW_IMG(0x10313683u), 3, sp0 - 0x80u, COW_IMG(0x1035069cu), sp0 - 0x98u);
    return -(0u < (uint16_t)arg5) + 1u;
L_1001609c: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10015fc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10015fc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
