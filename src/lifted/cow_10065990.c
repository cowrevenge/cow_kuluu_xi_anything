/* f_0x10065990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10065990(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1006bb10u), self + 0x10cu, 0);
    t1 = g->edx;
    g->edx = t1;
    cow_thiscall(g, COW_IMG(0x1006bb40u), self + 0x10cu, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x1006bb40u), self + 0x10cu, 0);
    t4 = g->edx;
    if (t3 == 0u) goto L_100659f8;
    eax = t3;
    edx = t4;
    edi = t3;
L_100659b9: ;
    ecx = rd32(edi + 0xcu);
    esi = arg1;
L_100659be: ;
    if (rd8(ecx) != rd8(esi))
    {
        edx = (edx & 0xffffff00u) | rd8(ecx);
        cf = rd8(ecx) < rd8(esi);
        goto L_100659e2;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx);
    edx = (edx & 0xffffff00u) | rd8(ecx);
    if ((uint8_t)edx == 0u) goto L_100659de;
    if (rd8(ecx + 1u) != rd8(esi + 1u))
    {
        edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
        cf = rd8(ecx + 1u) < rd8(esi + 1u);
        goto L_100659e2;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
    edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
    if ((uint8_t)edx != 0u)
    {
        ecx = ecx + 2u;
        esi = esi + 2u;
        goto L_100659be;
    }
L_100659de: ;
    ecx = 0u;
L_100659e7: ;
    if (ecx == 0u) goto L_10065a01;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall(g, COW_IMG(0x1006bb40u), self + 0x10cu, 0);
    t6 = g->edx;
    if (t5 != 0u)
    {
        eax = t5;
        edx = t6;
        edi = t5;
        goto L_100659b9;
    }
L_100659f8: ;
    return 0u;
L_100659e2: ;
    ecx = -cf + 1u - cf;
    goto L_100659e7;
L_10065a01: ;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10065990(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10065990(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
