/* f_0x102ef08a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102ef08a(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)rd32(rd32(arg1) + 0x14u) <= 0)
    {
        eax = rd32(arg1);
        edx = rd32(rd32(arg1) + 0x14u);
        goto L_102ef0a5;
    }
    eax = rd32(arg1);
    edx = rd32(rd32(arg1) + 0x14u);
    if ((int32_t)edx > (int32_t)rd32(eax + 0x74u)) goto L_102ef0a5;
    ecx = rd32(edx * 4u + rd32(eax + 0x70u));
L_102ef0c4: ;
    if (ecx != 0u) goto L_102ef0d0;
L_102ef0c8: ;
    t1 = rd32(eax + 0x70u);
    wr32(eax + 0x18u, edx);
    ecx = rd32(t1);
L_102ef0d0: ;
    edx = (edx & 0xffffff00u) | rd8(ecx);
    esi = ecx;
L_102ef0de: ;
    if ((uint8_t)edx != 0u) goto L_102ef0d6;
L_102ef0e2: ;
    t4 = rd32(eax + 0x34u);
    t5 = rd32(eax + 0x30u);
    t6 = rd32(eax + 0x2cu);
    t7 = rd32(eax + 0x28u);
    t8 = rd32(eax + 0x24u);
    t9 = rd32(eax + 0x20u);
    t10 = rd32(eax + 0x1cu);
    t11 = rd32(eax + 0x18u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t12 = cow_cdecl(g, COW_IMG(0x10312031u), 5, arg2, ecx, t11, t10, t9);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_102ef0a5: ;
    if (rd32(eax + 0x78u) == 0u) goto L_102ef0c8;
    ecx = rd32(eax + 0x78u);
    if ((int32_t)edx < (int32_t)rd32(eax + 0x7cu)) goto L_102ef0c8;
    esi = rd32(eax + 0x7cu);
    if ((int32_t)edx > (int32_t)rd32(eax + 0x80u)) goto L_102ef0c8;
    ecx = rd32(ecx + edx * 4u - esi * 4u);
    goto L_102ef0c4;
L_102ef0d6: ;
    if ((uint8_t)edx == 0x25u)
    {
        esi = esi + 1u;
        goto L_102ef109;
    }
    esi = esi + 1u;
    edx = (edx & 0xffffff00u) | rd8(esi);
    goto L_102ef0de;
L_102ef109: ;
    if (rd8(esi) != 0x73u) goto L_102ef0e2;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x10312031u), 3, arg2, ecx, eax + 0x18u);
    t3 = g->edx;
    g->edx = t3;
    return t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ef08a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ef08a(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
