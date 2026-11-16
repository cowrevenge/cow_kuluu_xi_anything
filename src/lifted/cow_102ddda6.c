/* f_0x102ddda6 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102ddda6(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_2c;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t self = g->ecx;

    t1 = rd32(rd32(self) + 0x1030u);
    if (((rd32(rd32(self) + 0x103cu) | rd32(rd32(self) + 0x1038u) | rd32(rd32(self) + 0x1030u) | rd32(rd32(self) + 0x1034u)) & 3u) == 0u)
    {
        esi = rd32(rd32(self) + 0x1034u);
        edi = rd32(self);
        loc_14 = t1;
        t2 = rd32(rd32(self + 4u) + 0x1030u);
        if (((rd32(rd32(self + 4u) + 0x103cu) | rd32(rd32(self + 4u) + 0x1038u) | t2 | rd32(rd32(self + 4u) + 0x1034u)) & 3u) == 0u)
        {
            eax = rd32(self + 4u);
            ecx = rd32(rd32(self + 4u) + 0x1034u);
            loc_18 = t2;
            goto L_102dde13;
        }
        edx = t2;
L_102dde09: ;
        eax = 0x80004005u;
L_102ddf2f: ;
    }
    else
    {
        edx = rd32(rd32(self) + 0x103cu) | rd32(rd32(self) + 0x1038u) | rd32(rd32(self) + 0x1030u) | rd32(rd32(self) + 0x1034u);
        eax = 0x80004005u;
    }
    g->edx = edx;
    return eax;
L_102dde13: ;
    if (rd32(eax + 4u) == 0x31545844u) goto L_102dde42;
    edx = rd32(eax + 4u);
    if (edx == 0x32545844u) goto L_102dde3e;
    if (edx == 0x33545844u) goto L_102dde3e;
    if (edx == 0x34545844u) goto L_102dde3e;
    if (edx != 0x35545844u) goto L_102dde09;
L_102dde3e: ;
    loc_2c = 0x10u;
L_102dde44: ;
    t3 = (rd32(eax + 0x1058u) >> 2u) * loc_2c;
    t4 = rd32(eax + 0x18u) + (loc_18 >> 2u) * loc_2c + (ecx >> 2u) * rd32(eax + 0x1050u) + rd32(eax + 0x1054u) * rd32(eax + 0x1040u);
    t5 = rd32(edi + 0x18u) + (loc_14 >> 2u) * loc_2c + (esi >> 2u) * rd32(edi + 0x1050u) + rd32(edi + 0x1054u) * rd32(edi + 0x1040u);
    if (rd32(eax + 0x1060u) == 0u)
    {
        edx = (loc_18 >> 2u) * loc_2c;
    }
    else
    {
        esi = t5;
        loc_18 = t5;
        loc_1c = t3;
        loc_10 = t4;
        eax = rd32(eax + 0x105cu);
        loc_c = self;
        loc_14 = 0u;
L_102ddebe: ;
        if (eax == 0u)
        {
            loc_c = 0u;
            goto L_102ddf05;
        }
        ebx = loc_10;
        loc_c = 0u;
        loc_8 = esi;
L_102ddecc: ;
        esi = loc_8;
        edi = ebx;
        ecx = loc_1c >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = loc_1c & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        t6 = loc_8 + rd32(rd32(self) + 0x1050u);
        if (loc_c + 4u < rd32(rd32(self + 4u) + 0x105cu))
        {
            ebx = ebx + rd32(rd32(self + 4u) + 0x1050u);
            loc_c = loc_c + 4u;
            loc_8 = t6;
            goto L_102ddecc;
        }
        eax = rd32(rd32(self + 4u) + 0x105cu);
        loc_c = loc_c + 4u;
L_102ddf05: ;
        t7 = loc_10 + rd32(rd32(self + 4u) + 0x1054u);
        t8 = loc_18 + rd32(rd32(self) + 0x1054u);
        if (loc_14 + 1u < rd32(rd32(self + 4u) + 0x1060u))
        {
            esi = t8;
            loc_14 = loc_14 + 1u;
            loc_18 = t8;
            loc_10 = t7;
            goto L_102ddebe;
        }
        edx = self;
    }
    eax = 0u;
    goto L_102ddf2f;
L_102dde42: ;
    loc_2c = 8u;
    goto L_102dde44;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ddda6(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ddda6(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
