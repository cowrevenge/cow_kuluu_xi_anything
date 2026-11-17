/* f_0x102ed3c4 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102ed3c4(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t of;
    uint32_t sf;
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 0x10u) == 0xc8u) goto L_102ed422;
    eax = rd32(arg1 + 0x10u);
    if (eax == 0xc9u)
    {
        ecx = self;
        edx = in_edx;
        goto L_102ed43c;
    }
    if (eax == 0xcau)
    {
        edx = in_edx;
        edi = 1u;
    }
    else
    {
        zf = eax == 0xcau;
        sf = (int32_t)(eax - 0xcau) < 0;
        of = ((eax ^ 0xcau) & (eax ^ eax - 0xcau)) >> 0x1fu;
        if (zf || sf != of) goto L_102ed404;
        if ((int32_t)eax <= 208) goto L_102ed3f6;
        if (eax != 0xd2u) goto L_102ed404;
L_102ed3f6: ;
        g->eax = rd32(arg1 + 0x18cu);
        g->edx = in_edx;
        t1 = rd32(arg1 + 0x18cu);
        g->esp = sp0 - 0xcu;
        t2 = cow_thiscall(g, rd32(t1), 0xcau, 0);
        t3 = g->edx;
        edx = t3;
        edi = t2;
    }
L_102ed459: ;
    g->esi = in_esi;
    g->edx = edx;
    return edi;
L_102ed404: ;
    wr32(rd32(arg1) + 0x14u, 0x12u);
    t4 = rd32(arg1 + 0x10u);
    wr32(rd32(arg1) + 0x18u, t4);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(rd32(arg1)), t4, 0);
    t5 = g->edx;
    edx = t5;
    edi = 0u;
    goto L_102ed459;
L_102ed422: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(rd32(arg1 + 0x18cu) + 4u), self, 0);
    t6 = g->ecx;
    t7 = g->edx;
    g->edx = t7;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(arg1 + 0x14u) + 8u), t6, 0);
    t8 = g->edx;
    wr32(arg1 + 0x10u, 0xc9u);
    ecx = arg1;
    edx = t8;
L_102ed43c: ;
    g->eax = rd32(arg1 + 0x18cu);
    g->edx = edx;
    t9 = rd32(arg1 + 0x18cu);
    g->esp = sp0 - 0xcu;
    t10 = cow_thiscall(g, rd32(t9), ecx, 0);
    t11 = g->edx;
    if (t10 != 1u)
    {
        edx = t11;
        edi = t10;
    }
    else
    {
        eax = t10;
        edx = t11;
        edi = t10;
        g->esi = arg1;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_stdcall(g, COW_IMG(0x102ed251u), 0);
        t12 = g->edx;
        wr32(arg1 + 0x10u, 0xcau);
        edx = t12;
    }
    goto L_102ed459;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ed3c4(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ed3c4(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
