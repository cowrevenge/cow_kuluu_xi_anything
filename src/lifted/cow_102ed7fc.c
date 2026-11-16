/* f_0x102ed7fc - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102ed7fc(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 0x10u) == 0xcdu)
    {
        eax = rd32(arg1 + 0x10u);
        goto L_102ed812;
    }
    eax = rd32(arg1 + 0x10u);
    if (eax != 0xceu) goto L_102ed82b;
L_102ed812: ;
    if (rd8(arg1 + 0x40u) == 0u) goto L_102ed82b;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(arg1 + 0x17cu) + 4u), self, 0);
    t1 = g->edx;
    wr32(arg1 + 0x10u, 0xd0u);
    edx = t1;
L_102ed848: ;
    ecx = arg1;
L_102ed85f: ;
    if ((int32_t)rd32(arg1 + 0x7cu) <= (int32_t)rd32(arg1 + 0x84u)) goto L_102ed84b;
    eax = rd32(arg1 + 0x7cu);
L_102ed86a: ;
    wr32(arg1 + 0x10u, 0xcfu);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_102ed82b: ;
    if (eax == 0xd0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_102ed85f;
    }
    wr32(rd32(arg1) + 0x14u, 0x12u);
    t2 = rd32(arg1 + 0x10u);
    wr32(rd32(arg1) + 0x18u, t2);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(arg1)), t2, 0);
    t3 = g->edx;
    edx = t3;
    goto L_102ed848;
L_102ed84b: ;
    if (rd8(rd32(arg1 + 0x18cu) + 0x11u) != 0u)
    {
        eax = rd32(arg1 + 0x18cu);
        goto L_102ed86a;
    }
    eax = rd32(arg1 + 0x18cu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, rd32(eax), ecx, 0);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_102ed875;
    }
    ecx = arg1;
    edx = t5;
    goto L_102ed85f;
L_102ed875: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ed7fc(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ed7fc(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
