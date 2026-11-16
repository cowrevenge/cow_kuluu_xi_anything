/* f_0x100089d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100089d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x8cu) == 0u) goto L_10008a99;
    eax = rd32(self + 0x8cu);
    if (rd8(COW_IMG(0x1034f92cu)) == 0u) goto L_10008a99;
    wr32(self + 0xa30u, 0x10u);
    g->eax = eax;
    g->edx = in_edx;
    t1 = rd32(eax);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, rd32(t1 + 0x28u), t1, 5, eax, 0x14u, self + 0x8f0u, self + 0xa30u, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    if ((int32_t)t2 > -2147024726)
    {
        eax = t2;
        goto L_10008a7b;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    zf = t2 + 0x7ff8ff56u == 0u;
    if (zf) goto L_10008a26;
    if (eax == 0x8007000cu) goto L_10008a26;
    if (eax != 0x8007001eu) goto L_10008a7f;
L_10008a26: ;
    if (rd8(COW_IMG(0x10456549u)) != 0u) goto L_10008a5c;
    wr8(COW_IMG(0x10456549u), 1u);
    t5 = rd32(self + 0x8cu);
    g->edx = rd32(t5);
    t6 = rd32(t5);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(t6 + 8u), ecx, 1, t5);
    t7 = g->edx;
    cow_fastcall(g, COW_IMG(0x10007ef0u), self, t7, 0);
    wr32(self + 0xa30u, 0u);
    edi = self + 0x8f0u;
    eax = 0u;
    ecx = 0x50u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    return;
L_10008a5c: ;
    t8 = rd32(self + 0x8cu);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(rd32(t8) + 0x1cu), ecx, 1, t8);
    wr32(self + 0xa30u, 0u);
    edi = self + 0x8f0u;
    eax = 0u;
    ecx = 0x50u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    return;
L_10008a7b: ;
    if (eax == 0u) goto L_10008a92;
L_10008a7f: ;
    wr32(self + 0xa30u, 0u);
    edi = self + 0x8f0u;
    eax = 0u;
    ecx = 0x50u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    return;
L_10008a92: ;
    wr8(COW_IMG(0x10456549u), 0u);
L_10008a99: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100089d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100089d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
