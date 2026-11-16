/* f_0x10131840 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10131840(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint32_t)(int16_t)arg1 - 1u > 3u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        goto L_10131926;
    }
    t1 = rd32(COW_IMG(0x1013192cu) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x10131856u: goto L_10131856;
    case 0x10131889u: goto L_10131889;
    case 0x101318bfu: goto L_101318bf;
    case 0x101318f4u: goto L_101318f4;
    default: rt_fatal(g, COW_IMG(0x1013184fu), "switch");
    }
    return 0;
L_10131856: ;
    if ((int32_t)((uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) & 0x80000003u) >= 0)
    {
        eax = (rd32(self + 8u) & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
        edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) & 0x80000003u;
        zf = ((uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) & 0x80000003u) == 0u;
    }
    else
    {
        eax = (rd32(self + 8u) & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
        edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) & 0x80000003u;
        zf = (edx - 1u | 0xfffffffcu) + 1u == 0u;
        edx = (edx - 1u | 0xfffffffcu) + 1u;
    }
    if (zf) goto L_1013187b;
    g->eax = eax + 1u;
    g->esp = sp0;
    t8 = cow_thiscall(g, COW_IMG(0x10131810u), self, 2, eax + 1u, 1u);
    return t8;
L_1013187b: ;
    g->eax = eax - 3u;
    g->esp = sp0;
    t9 = cow_thiscall(g, COW_IMG(0x10131810u), self, 2, eax - 3u, 1u);
    return t9;
L_10131889: ;
    if ((int32_t)((uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) & 0x80000003u) >= 0)
    {
        eax = (rd32(self + 8u) & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
        edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) & 0x80000003u;
    }
    else
    {
        eax = (rd32(self + 8u) & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
        edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) & 0x80000003u;
        edx = (edx - 1u | 0xfffffffcu) + 1u;
    }
    if (edx == 1u) goto L_101318b1;
    g->eax = eax - 1u;
    g->esp = sp0;
    t6 = cow_thiscall(g, COW_IMG(0x10131810u), self, 2, eax - 1u, 1u);
    return t6;
L_101318b1: ;
    g->eax = eax + 3u;
    g->esp = sp0;
    t7 = cow_thiscall(g, COW_IMG(0x10131810u), self, 2, eax + 3u, 1u);
    return t7;
L_101318bf: ;
    if ((int16_t)rd16(rd32(self + 8u) + 0x4cu) < 1)
    {
        eax = (rd32(self + 8u) & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
        goto L_101318e0;
    }
    eax = (rd32(self + 8u) & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
    if ((int16_t)eax > 4) goto L_101318e6;
    g->eax = eax + 0xcu;
    g->esp = sp0;
    t4 = cow_thiscall(g, COW_IMG(0x10131810u), self, 2, eax + 0xcu, 1u);
    return t4;
L_101318e0: ;
    if ((int16_t)eax <= 4) goto L_10131926;
L_101318e6: ;
    g->eax = eax - 4u;
    g->esp = sp0;
    t5 = cow_thiscall(g, COW_IMG(0x10131810u), self, 2, eax - 4u, 1u);
    return t5;
L_101318f4: ;
    if ((int16_t)rd16(rd32(self + 8u) + 0x4cu) < 13)
    {
        eax = ((uint32_t)(int16_t)arg1 - 1u & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
        edx = rd32(self + 8u);
        goto L_10131915;
    }
    eax = ((uint32_t)(int16_t)arg1 - 1u & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
    edx = rd32(self + 8u);
    if ((int16_t)eax > 16) goto L_10131915;
    g->eax = eax - 0xcu;
    g->esp = sp0;
    t2 = cow_thiscall(g, COW_IMG(0x10131810u), self, 2, eax - 0xcu, 1u);
    return t2;
L_10131915: ;
    if ((int16_t)eax <= 12)
    {
        g->eax = eax + 4u;
        g->esp = sp0;
        t3 = cow_thiscall(g, COW_IMG(0x10131810u), self, 2, eax + 4u, 1u);
        eax = t3;
    }
L_10131926: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10131840(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10131840(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
