/* f_0x10203130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10203130(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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

    g->edx = in_edx;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), self, 1, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_10203162;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    if ((rd8(eax + 0x34u) & 3u) != 0u) goto L_10203162;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u) goto L_1020317f;
    eax = t4;
    ecx = t5;
    edx = t6;
L_10203152: ;
    if ((rd8(eax + 0x34u) & 0x10u) != 0u) goto L_10203181;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t7 = cow_stdcall(g, COW_IMG(0x100e8c70u), 0);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 != 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_10203152;
    }
    eax = t7;
    return eax;
L_10203162: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t10 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 5u);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 == 0u) goto L_1020317f;
    eax = t10;
    ecx = t11;
    edx = t12;
L_10203170: ;
    if ((rd8(eax + 0x34u) & 0x20u) != 0u) goto L_10203181;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t13 = cow_stdcall(g, COW_IMG(0x100e8c70u), 0);
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 != 0u)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        goto L_10203170;
    }
L_1020317f: ;
    eax = 0u;
L_10203181: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10203130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10203130(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
