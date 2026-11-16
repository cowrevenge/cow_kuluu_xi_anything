/* f_0x10068200 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10068200(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    edi = self + 0x400u;
    eax = 0u;
    ecx = 0x80u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edx = arg1;
    ebx = self;
L_10068226: ;
    t1 = rd8(edx);
    wr8(edx + self - arg1, (uint8_t)t1);
    if ((uint8_t)t1 != (uint8_t)eax)
    {
        edx = edx + 1u;
        ebx = (ebx & 0xffffff00u) | t1;
        goto L_10068226;
    }
    ebx = (ebx & 0xffffff00u) | t1;
    ecx = arg1;
    edx = self;
    ebp = 0u;
    esi = self + 0x400u;
L_10068236: ;
    if ((uint32_t)(int8_t)rd8(ecx) > 0x22u) goto L_1006827a;
    edi = (uint32_t)(int8_t)rd8(ecx);
    t2 = rd32(COW_IMG(0x100682ccu) + rd8(COW_IMG(0x100682dcu) + edi) * 4u);
    switch (t2 - RD)
    {
    case 0x1006824du: ebx = rd8(COW_IMG(0x100682dcu) + edi); goto L_1006824d;
    case 0x10068250u: ebx = rd8(COW_IMG(0x100682dcu) + edi); goto L_10068250;
    case 0x1006827au: ebx = rd8(COW_IMG(0x100682dcu) + edi); goto L_1006827a;
    case 0x100682b4u: goto L_100682b4;
    default: rt_fatal(g, COW_IMG(0x10068246u), "switch");
    }
    return 0;
L_1006824d: ;
    ecx = ecx + 1u;
    goto L_10068236;
L_10068250: ;
    wr32(esi, edx);
    t3 = rd8(ecx + 1u);
    wr8(edx, (uint8_t)t3);
    if (rd8(ecx + 1u) == 0x22u)
    {
        edx = edx + 1u;
        ebx = ((ebx | t3) & 0xffffff00u) | rd8(ecx + 1u);
        ecx = ecx + 1u;
        ebp = ebp + 1u;
        esi = esi + 4u;
        goto L_10068275;
    }
    edx = edx + 1u;
    ebx = ((ebx | t3) & 0xffffff00u) | rd8(ecx + 1u);
    ecx = ecx + 1u;
    ebp = ebp + 1u;
    esi = esi + 4u;
L_10068263: ;
    if ((uint8_t)ebx == (uint8_t)eax) goto L_10068236;
    t4 = rd8(ecx + 1u);
    wr8(edx, (uint8_t)t4);
    if (rd8(ecx + 1u) != 0x22u)
    {
        edx = edx + 1u;
        ebx = ((ebx | t4) & 0xffffff00u) | rd8(ecx + 1u);
        ecx = ecx + 1u;
        goto L_10068263;
    }
    edx = edx + 1u;
    ebx = ((ebx | t4) & 0xffffff00u) | rd8(ecx + 1u);
    ecx = ecx + 1u;
L_10068275: ;
    wr8(edx - 1u, (uint8_t)eax);
    goto L_10068236;
L_1006827a: ;
    wr32(esi, edx);
    t5 = rd8(ecx);
    wr8(edx, (uint8_t)t5);
    if (rd8(ecx) == 0x20u)
    {
        edx = edx + 1u;
        ebx = ((ebx | t5) & 0xffffff00u) | rd8(ecx);
        ebp = ebp + 1u;
        esi = esi + 4u;
        goto L_100682a8;
    }
    edx = edx + 1u;
    ebx = ((ebx | t5) & 0xffffff00u) | rd8(ecx);
    ebp = ebp + 1u;
    esi = esi + 4u;
L_1006828c: ;
    if ((uint8_t)ebx == 9u) goto L_100682a8;
    if ((uint8_t)ebx == 0xau) goto L_100682a8;
    if ((uint8_t)ebx == (uint8_t)eax) goto L_100682a8;
    t6 = rd8(ecx + 1u);
    wr8(edx, (uint8_t)t6);
    if (rd8(ecx + 1u) != 0x20u)
    {
        edx = edx + 1u;
        ebx = ((ebx | t6) & 0xffffff00u) | rd8(ecx + 1u);
        ecx = ecx + 1u;
        goto L_1006828c;
    }
    edx = edx + 1u;
    ebx = ((ebx | t6) & 0xffffff00u) | rd8(ecx + 1u);
    ecx = ecx + 1u;
L_100682a8: ;
    wr8(edx - 1u, (uint8_t)eax);
    if (rd8(ecx) == (uint8_t)eax)
    {
        ebx = (ebx & 0xffffff00u) | rd8(ecx);
    }
    else
    {
        ebx = (ebx & 0xffffff00u) | rd8(ecx);
        ecx = ecx + 1u;
    }
    goto L_10068236;
L_100682b4: ;
    wr8(edx, (uint8_t)eax);
    wr32(self + 0x600u, ebp);
    return ebp;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10068200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10068200(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
