/* f_0x101bf7f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101bf7f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x101c2030u), self, 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int32_t)t1 >= 0)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_101bf823;
    }
    ecx = t2;
    eax = COW_IMG(0x1037cb94u);
L_101bf810: ;
    t4 = rd8(eax);
    wr8(arg2 + eax - COW_IMG(0x1037cb94u), (uint8_t)t4);
    if ((uint8_t)t4 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t4;
        goto L_101bf810;
    }
    eax = eax + 1u;
    return 0xffffffffu;
L_101bf823: ;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, esi + 0x400u, in_ebp, in_edi);
    t6 = g->edx;
    g->edx = t6;
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x101bf710u), self, 6, arg1, 0x24u, t5, esi + 0x400u, 0u, 1u);
    t8 = g->ecx;
    t9 = g->edx;
    if ((int32_t)t7 < 0)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        ebp = t5;
        goto L_101bf878;
    }
    edx = t9;
    ebp = t5;
    esi = t7;
    g->eax = arg4;
    g->ecx = arg3;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_cdecl(g, COW_IMG(0x10311896u), 7, ebp, esi, arg3, arg4, arg1, arg2, 0xffu);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 != 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        edi = t10;
        sf = (int32_t)t10 < 0;
        goto L_101bf87e;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    edi = esi - 0x208u;
L_101bf87c: ;
    sf = (int32_t)edi < 0;
L_101bf87e: ;
    if (sf)
    {
        eax = COW_IMG(0x1037cb94u);
L_101bf889: ;
        t13 = rd8(eax);
        wr8(arg2 + eax - COW_IMG(0x1037cb94u), (uint8_t)t13);
        if ((uint8_t)t13 != 0u)
        {
            eax = eax + 1u;
            ecx = (ecx & 0xffffff00u) | t13;
            goto L_101bf889;
        }
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t13;
        edx = arg2 - COW_IMG(0x1037cb94u);
    }
    if (ebp != 0u)
    {
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, ebp);
    }
    return edi;
L_101bf878: ;
    edi = arg2;
    goto L_101bf87c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bf7f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101bf7f0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
