/* f_0x100960f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100960f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (!(rd32(arg1 + 0x120u) >> 0xdu & 1u))
    {
        eax = rd32(arg1 + 0x120u) >> 0xdu;
        edx = in_edx;
        goto L_10096135;
    }
    if (rd32(arg1 + 0x188u) == 0u)
    {
        eax = rd32(arg1 + 0x188u);
        edx = in_edx;
        goto L_10096135;
    }
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), self, 1, 0u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_10096135;
    }
    eax = t1;
    edx = t2;
L_1009611b: ;
    if (rd32(eax + 0x14u) == rd32(arg1 + 0x188u))
    {
        eax = rd32(arg1 + 0x188u);
        goto L_100961ba;
    }
    ecx = rd32(eax + 0x14u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_stdcall(g, COW_IMG(0x100e8c70u), 0);
    t4 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        edx = t4;
        goto L_1009611b;
    }
    eax = t3;
    edx = t4;
L_10096135: ;
    if ((int32_t)arg2 >= 400) goto L_1009614f;
    if (!(rd8(arg1 + 0x127u) & 1u)) goto L_1009614f;
    return (eax & 0xffffff00u) | 1u;
L_1009614f: ;
    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1057876cu));
        goto L_10096178;
    }
    eax = rd32(COW_IMG(0x1057876cu));
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x101598b0u), eax + 0x28u, 0);
    t6 = g->edx;
    if (t5 == arg1)
    {
        eax = t5;
        goto L_10096173;
    }
    edx = t6;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, COW_IMG(0x101598b0u), rd32(COW_IMG(0x1057876cu)), 0);
    if (t7 != arg1)
    {
        eax = t7;
        goto L_10096178;
    }
    eax = t7;
L_10096173: ;
    return (eax & 0xffffff00u) | 1u;
L_10096178: ;
    if ((int32_t)arg2 >= 9) goto L_100961bf;
    t8 = rd32(arg1 + 0x78u);
    if ((t8 & 0xff000000u) != 0x1000000u)
    {
        eax = t8;
        goto L_100961bf;
    }
    eax = t8;
    edx = t8 & 0xff000000u;
    if (eax == edx) goto L_100961bf;
    if (!(rd32(arg1 + 0x1d0u) >> 8u & 1u))
    {
        eax = rd32(arg1 + 0x1d0u);
        goto L_100961ac;
    }
    if (!(rd32(arg1 + 0x12cu) >> 0x1eu & 1u))
    {
        eax = rd32(arg1 + 0x12cu) >> 0x1eu;
        goto L_100961bf;
    }
    eax = rd32(arg1 + 0x12cu) >> 0x1eu;
L_100961ac: ;
    if (rd32(arg1 + 0x120u) >> 0xdu & 1u) goto L_100961bf;
L_100961ba: ;
    return (eax & 0xffffff00u) | 1u;
L_100961bf: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100960f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100960f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
