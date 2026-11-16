/* f_0x102f703c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102f703c(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 == 0u) goto L_102f711a;
    if (rd8(arg3) != 0x31u) goto L_102f711a;
    if (arg4 != 0x38u) goto L_102f711a;
    if (arg1 != 0u) goto L_102f7070;
    edx = in_edx;
    loc_10 = 0xfffffffeu;
L_102f711c: ;
    eax = loc_10;
L_102f711d: ;
    g->edx = edx;
    return eax;
L_102f7070: ;
    t1 = rd32(arg1 + 0x20u);
    wr32(arg1 + 0x18u, 0u);
    if (t1 == 0u)
    {
        wr32(arg1 + 0x20u, COW_IMG(0x10308f0fu));
        wr32(arg1 + 0x28u, 0u);
    }
    if (rd32(arg1 + 0x24u) == 0u)
    {
        wr32(arg1 + 0x24u, COW_IMG(0x10308f1fu));
    }
    t2 = rd32(arg1 + 0x28u);
    g->eax = arg3;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall_cdecl(g, rd32(arg1 + 0x20u), self, 3, t2, 1u, 0x18u);
    t4 = g->edx;
    wr32(arg1 + 0x1cu, t3);
    if (t3 != 0u)
    {
        eax = t3;
        edx = t4;
        goto L_102f70a8;
    }
    edx = t4;
    loc_10 = 0xfffffffcu;
    goto L_102f711c;
L_102f70a8: ;
    wr32(eax + 0x14u, 0u);
    wr32(rd32(arg1 + 0x1cu) + 0xcu, 0u);
    if ((int32_t)arg2 >= 0)
    {
        ecx = arg2;
    }
    else
    {
        wr32(rd32(arg1 + 0x1cu) + 0xcu, 1u);
        ecx = -arg2;
    }
    if ((int32_t)ecx < 8) goto L_102f7116;
    if ((int32_t)ecx > 15) goto L_102f7116;
    cf = ecx < 0xfu;
    pf = PARITY((uint8_t)(ecx - 0xfu));
    zf = ecx == 0xfu;
    sf = (int32_t)(ecx - 0xfu) < 0;
    of = ((ecx ^ 0xfu) & (ecx ^ ecx - 0xfu)) >> 0x1fu;
    wr32(rd32(arg1 + 0x1cu) + 0x10u, ecx);
    t5 = 1u << (ecx & 0x1fu);
    t6 = ~-(rd32(rd32(arg1 + 0x1cu) + 0xcu) != 0u) & COW_IMG(0x10308ddfu);
    g->esp = sp0 - 0xcu;
    t7 = cow_call_regs(g, COW_IMG(0x10308545u), g->eax, ecx, edx, 1, 3, arg1, t6, t5);
    t8 = g->edx;
    t9 = rd32(arg1 + 0x1cu);
    wr32(t9 + 0x14u, t7);
    if (rd32(rd32(arg1 + 0x1cu) + 0x14u) != 0u)
    {
        ecx = t9;
        edx = t8;
        goto L_102f710b;
    }
    ecx = t9;
    edx = t8;
    loc_10 = 0xfffffffcu;
L_102f70ff: ;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x102f6ffeu), g->eax, ecx, edx, 1, 3, arg1, in_edi, in_esi);
    t11 = g->edx;
    eax = loc_10;
    edx = t11;
    goto L_102f711d;
L_102f710b: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102f6fbfu), 1, arg1);
    t10 = g->edx;
    eax = 0u;
    edx = t10;
    goto L_102f711d;
L_102f7116: ;
    loc_10 = 0xfffffffeu;
    goto L_102f70ff;
L_102f711a: ;
    edx = in_edx;
    loc_10 = 0xfffffffau;
    goto L_102f711c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f703c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f703c(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
