/* f_0x102ed879 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102ed879(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 0x10u) != 0xcau)
    {
        ecx = self;
        edx = in_edx;
        goto L_102ed8a6;
    }
    g->eax = in_eax;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x102f6f8fu), g->eax, self, in_edx, 1, 1, arg1);
    t2 = g->edx;
    if (rd8(arg1 + 0x40u) == 0u)
    {
        edx = t2;
        goto L_102ed89f;
    }
    eax = t1;
    edx = t2;
    wr32(arg1 + 0x10u, 0xcfu);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_102ed89f: ;
    wr32(arg1 + 0x10u, 0xcbu);
    ecx = arg1;
L_102ed8a6: ;
    if (rd32(arg1 + 0x10u) != 0xcbu)
    {
        eax = rd32(arg1 + 0x10u);
        goto L_102ed915;
    }
    if (rd8(rd32(arg1 + 0x18cu) + 0x10u) == 0u) goto L_102ed90a;
L_102ed8bc: ;
    if (rd32(arg1 + 8u) != 0u)
    {
        eax = rd32(arg1 + 8u);
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall_cdecl(g, rd32(eax), ecx, 1, arg1);
        t3 = g->edx;
        ecx = arg1;
        edx = t3;
    }
    g->eax = rd32(arg1 + 0x18cu);
    g->edx = edx;
    t4 = rd32(arg1 + 0x18cu);
    g->esp = sp0 - 4u;
    t5 = cow_thiscall_cdecl(g, rd32(t4), ecx, 1, arg1);
    t6 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        edx = t6;
        goto L_102ed906;
    }
    eax = t5;
    edx = t6;
    if (eax == 2u)
    {
        ecx = arg1;
        goto L_102ed90a;
    }
    if (rd32(arg1 + 8u) == 0u)
    {
        ecx = rd32(arg1 + 8u);
    }
    else
    {
        ecx = rd32(arg1 + 8u);
        if (eax == 3u) goto L_102ed8eb;
        if (eax != 1u) goto L_102ed8bc;
L_102ed8eb: ;
        wr32(ecx + 4u, rd32(ecx + 4u) + 1u);
        if ((int32_t)rd32(rd32(arg1 + 8u) + 4u) < (int32_t)rd32(rd32(arg1 + 8u) + 8u))
        {
            ecx = rd32(rd32(arg1 + 8u) + 8u);
        }
        else
        {
            eax = rd32(arg1 + 8u);
            ecx = rd32(rd32(arg1 + 8u) + 8u);
            t7 = ecx + rd32(arg1 + 0x118u);
            wr32(eax + 8u, t7);
            edx = t7;
        }
    }
    goto L_102ed8bc;
L_102ed906: ;
    g->edx = edx;
    return eax & 0xffffff00u;
L_102ed90a: ;
    t8 = rd32(arg1 + 0x7cu);
    wr32(arg1 + 0x84u, t8);
    eax = t8;
L_102ed933: ;
    g->esi = arg1;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t13 = cow_fastcall(g, COW_IMG(0x102ed5d8u), ecx, edx, 0);
    t14 = g->edx;
    g->esi = in_esi;
    g->edx = t14;
    return t13;
L_102ed915: ;
    if (eax != 0xccu)
    {
        wr32(rd32(arg1) + 0x14u, 0x12u);
        t9 = rd32(arg1 + 0x10u);
        wr32(rd32(arg1) + 0x18u, t9);
        g->eax = rd32(arg1);
        g->edx = edx;
        t10 = rd32(arg1);
        g->esp = sp0 - 4u;
        t11 = cow_thiscall_cdecl(g, rd32(t10), t9, 1, arg1);
        t12 = g->edx;
        eax = t11;
        ecx = arg1;
        edx = t12;
    }
    goto L_102ed933;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ed879(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ed879(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
