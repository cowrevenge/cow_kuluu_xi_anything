/* f_0x1007bb90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007bb90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        edx = t3;
        goto L_1007bbf9;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    esi = t1;
    if ((int32_t)rd32(COW_IMG(0x1047d490u)) < 2) goto L_1007bbf9;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x101cc0d0u), eax, g->ecx, edx, 1, 2, 0x7fu, 0u);
    t5 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        edx = t5;
        goto L_1007bbbb;
    }
    edx = t5;
    g->edx = edx;
    return arg3;
L_1007bbbb: ;
    t6 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    t7 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 4u;
    t8 = cow_call_regs(g, COW_IMG(0x10227000u), t7, t6, edx, 1, 1, t6);
    t9 = g->ecx;
    t10 = g->edx;
    if ((int32_t)t8 < 0)
    {
        edx = t10;
        goto L_1007bbf9;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    if ((int32_t)eax >= 64) goto L_1007bbf9;
    if (rd8(COW_IMG(0x1047d498u)) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x1047d498u));
        t11 = rd32(esi + 4u);
        g->edx = t11;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x100780a0u), 5, rd32(esi), t11, 0x1au, eax, 0u);
        t12 = g->edx;
        edx = t12;
    }
    g->edx = edx;
    return arg3;
L_1007bbf9: ;
    g->edx = edx;
    return -arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007bb90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007bb90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
