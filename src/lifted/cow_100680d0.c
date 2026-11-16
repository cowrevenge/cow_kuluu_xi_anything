/* f_0x100680d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100680d0(Guest* g)
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
    uint32_t t7;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    edi = self + 0x400u;
    eax = 0u;
    ecx = 0x80u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = arg1;
    ebx = self;
L_100680f6: ;
    t1 = rd8(ecx);
    wr8(ecx + self - arg1, (uint8_t)t1);
    if ((uint8_t)t1 != (uint8_t)eax)
    {
        ecx = ecx + 1u;
        ebx = (ebx & 0xffffff00u) | t1;
        goto L_100680f6;
    }
    ebx = (ebx & 0xffffff00u) | t1;
    ecx = self;
    edx = arg1;
    ebp = 0u;
    esi = self + 0x400u;
L_10068106: ;
    if ((uint32_t)(int8_t)rd8(edx) > 0x2cu) goto L_10068158;
    edi = (uint32_t)(int8_t)rd8(edx);
    t2 = rd32(COW_IMG(0x100681b4u) + rd8(COW_IMG(0x100681c8u) + edi) * 4u);
    switch (t2 - RD)
    {
    case 0x1006811du: ebx = rd8(COW_IMG(0x100681c8u) + edi); goto L_1006811d;
    case 0x1006812eu: ebx = rd8(COW_IMG(0x100681c8u) + edi); goto L_1006812e;
    case 0x10068158u: ebx = rd8(COW_IMG(0x100681c8u) + edi); goto L_10068158;
    case 0x10068198u: ebx = rd8(COW_IMG(0x100681c8u) + edi); goto L_10068198;
    case 0x1006819eu: goto L_1006819e;
    default: rt_fatal(g, COW_IMG(0x10068116u), "switch");
    }
    return 0;
L_1006811d: ;
    wr32(esi, ecx);
    t5 = rd8(edx);
    wr8(ecx, (uint8_t)t5);
    wr8(ecx + 1u, (uint8_t)eax);
    ecx = ecx + 2u;
    edx = edx + 1u;
    ebx = (ebx & 0xffffff00u) | t5;
    ebp = ebp + 1u;
    esi = esi + 4u;
    goto L_10068106;
L_1006812e: ;
    wr32(esi, ecx);
    t3 = rd8(edx + 1u);
    wr8(ecx, (uint8_t)t3);
    if (rd8(edx + 1u) == 0x22u)
    {
        ecx = ecx + 1u;
        ebx = ((ebx | t3) & 0xffffff00u) | rd8(edx + 1u);
        edx = edx + 1u;
        ebp = ebp + 1u;
        esi = esi + 4u;
        goto L_10068153;
    }
    ecx = ecx + 1u;
    ebx = ((ebx | t3) & 0xffffff00u) | rd8(edx + 1u);
    edx = edx + 1u;
    ebp = ebp + 1u;
    esi = esi + 4u;
L_10068141: ;
    if ((uint8_t)ebx == (uint8_t)eax) goto L_10068106;
    t4 = rd8(edx + 1u);
    wr8(ecx, (uint8_t)t4);
    if (rd8(edx + 1u) != 0x22u)
    {
        ecx = ecx + 1u;
        ebx = ((ebx | t4) & 0xffffff00u) | rd8(edx + 1u);
        edx = edx + 1u;
        goto L_10068141;
    }
    ecx = ecx + 1u;
    ebx = ((ebx | t4) & 0xffffff00u) | rd8(edx + 1u);
    edx = edx + 1u;
L_10068153: ;
    wr8(ecx - 1u, (uint8_t)eax);
    goto L_10068106;
L_10068158: ;
    wr32(esi, ecx);
    t6 = rd8(edx);
    wr8(ecx, (uint8_t)t6);
    if (rd8(edx) == 0x2cu)
    {
        ecx = ecx + 1u;
        ebx = ((ebx | t6) & 0xffffff00u) | rd8(edx);
        ebp = ebp + 1u;
        esi = esi + 4u;
        goto L_1006818b;
    }
    ecx = ecx + 1u;
    ebx = ((ebx | t6) & 0xffffff00u) | rd8(edx);
    ebp = ebp + 1u;
    esi = esi + 4u;
L_1006816a: ;
    if ((uint8_t)ebx == 0x20u) goto L_1006818b;
    if ((uint8_t)ebx == 9u) goto L_1006818b;
    if ((uint8_t)ebx == 0xau) goto L_1006818b;
    if ((uint8_t)ebx == (uint8_t)eax) goto L_1006818b;
    t7 = rd8(edx + 1u);
    wr8(ecx, (uint8_t)t7);
    if (rd8(edx + 1u) != 0x2cu)
    {
        ecx = ecx + 1u;
        ebx = ((ebx | t7) & 0xffffff00u) | rd8(edx + 1u);
        edx = edx + 1u;
        goto L_1006816a;
    }
    ecx = ecx + 1u;
    ebx = ((ebx | t7) & 0xffffff00u) | rd8(edx + 1u);
    edx = edx + 1u;
L_1006818b: ;
    wr8(ecx - 1u, (uint8_t)eax);
    if (rd8(edx) == (uint8_t)eax)
    {
        ebx = (ebx & 0xffffff00u) | rd8(edx);
        goto L_10068106;
    }
    ebx = (ebx & 0xffffff00u) | rd8(edx);
L_10068198: ;
    edx = edx + 1u;
    goto L_10068106;
L_1006819e: ;
    wr8(ecx, (uint8_t)eax);
    wr32(self + 0x600u, ebp);
    return ebp;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100680d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100680d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
