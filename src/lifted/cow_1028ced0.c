/* f_0x1028ced0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1028ced0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x10279890u), 2, arg1, arg2);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int32_t)rd32(arg1 + 0x44u) <= 0)
    {
        eax = rd32(arg1 + 0x44u);
        ecx = t2;
        edx = t3;
        goto L_1028cf12;
    }
    eax = rd32(arg1 + 0x44u);
    ecx = t2;
    edx = t3;
    ebx = t1;
    edi = 0u;
L_1028cef1: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x10279890u), 2, arg1, edi);
    t5 = g->edx;
    if (rd32(t4) != 0xb0001u)
    {
        ecx = rd32(t4);
        edx = t5;
        goto L_1028cf0a;
    }
    eax = t4;
    ecx = rd32(t4);
    edx = t5;
    if (rd32(ebx + 0x1cu) == eax) goto L_1028cf42;
L_1028cf0a: ;
    if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 0x44u))
    {
        eax = rd32(arg1 + 0x44u);
        edi = edi + 1u;
        goto L_1028cef1;
    }
    eax = rd32(arg1 + 0x44u);
L_1028cf12: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b98f8u));
    t8 = g->ecx;
    t9 = g->edx;
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0x1cu;
    t10 = cow_cdecl(g, COW_IMG(0x10279b80u), 2, arg1, arg2);
    t11 = g->ecx;
    t12 = g->edx;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba280u), t10);
    return 0u;
L_1028cf42: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t6 = cow_cdecl(g, COW_IMG(0x10279b80u), 2, arg1, edi);
    return t6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028ced0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1028ced0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
