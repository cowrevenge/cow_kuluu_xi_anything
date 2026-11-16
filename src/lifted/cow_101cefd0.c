/* f_0x101cefd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_101cefd0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(sp0 + 0xcu) + rd32(sp0 + 4u);
    t2 = rd32(sp0 + 4u);
    t3 = rd32(sp0 + 0xcu);
    t4 = rd32(sp0 - 8u);
    wr32(sp0 + 4u, arg4 + arg2);
    wr32(sp0 + 0xcu, t2);
    if ((int32_t)t2 >= (int32_t)(t3 + t2))
    {
        eax = t2;
        edx = t1;
        goto L_101cf088;
    }
    eax = t2;
    loc_8 = t4 & 0xffffffu;
    loc_4 = t1;
    ecx = self & 0xffffff00u;
    edx = eax * 3u;
    edi = eax * 0x1au;
L_101cf013: ;
    if ((int32_t)arg2 >= (int32_t)rd32(sp0 + 4u)) goto L_101cf074;
    esi = arg2;
L_101cf019: ;
    if ((int32_t)edi < 0) goto L_101cf094;
    if ((int32_t)esi < 0) goto L_101cf094;
    if ((int32_t)edi >= 520) goto L_101cf094;
    if ((int32_t)esi >= 26) goto L_101cf094;
    if (((uint8_t)arg5 & rd8(edi * 8u + esi * 8u + self + 4u)) == 0u)
    {
        eax = edi * 8u + esi * 8u + self;
        edx = (edx & 0xffffff00u) | rd8(edi * 8u + esi * 8u + self + 4u);
        goto L_101cf094;
    }
    eax = edi * 8u + esi * 8u + self;
    edx = (edx & 0xffffff00u) | rd8(edi * 8u + esi * 8u + self + 4u);
    if (arg5 != 2u) goto L_101cf063;
    if (edx & 1u) goto L_101cf094;
    if ((uint8_t)ecx == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax + 2u);
        loc_8 = (loc_8 & 0xffffffu) | rd8(eax + 2u) << 0x18u;
    }
    if ((uint8_t)ecx != rd8(eax)) goto L_101cf094;
    if (loc_8 >> 0x18u != rd8(eax + 2u))
    {
        edx = (edx & 0xffffff00u) | loc_8 >> 0x18u;
        goto L_101cf094;
    }
    edx = (edx & 0xffffff00u) | loc_8 >> 0x18u;
L_101cf063: ;
    if ((int32_t)(esi + 1u) < (int32_t)rd32(sp0 + 4u))
    {
        eax = rd32(sp0 + 4u);
        esi = esi + 1u;
        goto L_101cf019;
    }
L_101cf074: ;
    t5 = rd32(sp0 + 0xcu) + 1u;
    t6 = rd32(sp0 + 0xcu);
    wr32(sp0 + 0xcu, t5);
    if ((int32_t)(t6 + 1u) < (int32_t)loc_4)
    {
        eax = t5;
        edx = loc_4;
        edi = edi + 0x1au;
        goto L_101cf013;
    }
    eax = t5;
    edx = loc_4;
L_101cf088: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_101cf094: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cefd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cefd0(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
