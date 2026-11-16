/* f_0x1007f020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007f020(Guest* g)
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
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)rd32(COW_IMG(0x1047d490u)) >= 2)
    {
        ecx = self;
        edx = in_edx;
        zf = rd32(COW_IMG(0x1047d490u)) == 2u;
        goto L_1007f05b;
    }
    g->eax = in_eax;
    t1 = rd32(COW_IMG(0x10663484u));
    g->esp = sp0;
    t2 = cow_fastcall(g, COW_IMG(0x101ddb80u), t1, in_edx, 2, COW_IMG(0x10358108u), 3u);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        ecx = t3;
        edx = t4;
        goto L_1007f054;
    }
    eax = t2;
    edx = t4;
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0xe1u);
    t5 = g->edx;
    g->edx = t5;
    return arg3;
L_1007f054: ;
    zf = rd32(COW_IMG(0x1047d490u)) == 2u;
L_1007f05b: ;
    if (!zf) goto L_1007f08c;
    t6 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->eax = rd32(COW_IMG(0x103551e0u));
    t7 = rd32(COW_IMG(0x103551e0u));
    t8 = rd32(COW_IMG(0x10663484u));
    g->esp = sp0;
    t9 = cow_fastcall(g, COW_IMG(0x101ddb80u), t8, edx, 2, t6, 3u);
    t10 = g->ecx;
    t11 = g->edx;
    if ((uint8_t)t9 == 0u)
    {
        ecx = t10;
        edx = t11;
        goto L_1007f08c;
    }
    eax = t9;
    edx = t11;
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0xe1u);
    t12 = g->edx;
    g->edx = t12;
    return arg3;
L_1007f08c: ;
    if ((int32_t)rd32(COW_IMG(0x1047d490u)) < 3) goto L_1007f0d6;
    t13 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    g->eax = t13;
    g->esp = sp0;
    t14 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, t13);
    t15 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    t16 = cow_fastcall(g, COW_IMG(0x101ddb80u), rd32(COW_IMG(0x10663484u)), t15, 2, t15, t14);
    t17 = g->edx;
    if ((uint8_t)t16 == 0u)
    {
        edx = t17;
        goto L_1007f0d6;
    }
    eax = t16;
    edx = t17;
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0xe1u);
    t18 = g->edx;
    g->edx = t18;
    return arg3;
L_1007f0d6: ;
    g->edx = edx;
    return -arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007f020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007f020(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
