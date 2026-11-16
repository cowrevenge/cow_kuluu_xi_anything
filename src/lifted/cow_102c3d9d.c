/* f_0x102c3d9d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102c3d9d(Guest* g)
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

    if (arg3 == 0u) goto L_102c3e80;
    if (rd8(arg3) != rd8(COW_IMG(0x103c7c4cu))) goto L_102c3e80;
    eax = (arg3 & 0xffffff00u) | rd8(arg3);
    if (arg4 != 0x38u) goto L_102c3e80;
    if (arg1 != 0u) goto L_102c3dd6;
    loc_10 = 0xfffffffeu;
L_102c3e82: ;
    eax = loc_10;
L_102c3e83: ;
    return eax;
L_102c3dd6: ;
    t1 = rd32(arg1 + 0x20u);
    wr32(arg1 + 0x18u, 0u);
    if (t1 == 0u)
    {
        wr32(arg1 + 0x20u, COW_IMG(0x102c7aebu));
        wr32(arg1 + 0x28u, 0u);
    }
    if (rd32(arg1 + 0x24u) == 0u)
    {
        wr32(arg1 + 0x24u, COW_IMG(0x102c7afbu));
    }
    t2 = rd32(arg1 + 0x28u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall_cdecl(g, rd32(arg1 + 0x20u), self, 3, t2, 1u, 0x18u);
    t4 = g->edx;
    wr32(arg1 + 0x1cu, t3);
    if (t3 != 0u)
    {
        eax = t3;
        edx = t4;
        goto L_102c3e0e;
    }
    loc_10 = 0xfffffffcu;
    goto L_102c3e82;
L_102c3e0e: ;
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
    if ((int32_t)ecx < 8) goto L_102c3e7c;
    if ((int32_t)ecx > 15) goto L_102c3e7c;
    cf = ecx < 0xfu;
    pf = PARITY((uint8_t)(ecx - 0xfu));
    zf = ecx == 0xfu;
    sf = (int32_t)(ecx - 0xfu) < 0;
    of = ((ecx ^ 0xfu) & (ecx ^ ecx - 0xfu)) >> 0x1fu;
    wr32(rd32(arg1 + 0x1cu) + 0x10u, ecx);
    t5 = 1u << (ecx & 0x1fu);
    t6 = ~-(rd32(rd32(arg1 + 0x1cu) + 0xcu) != 0u) & COW_IMG(0x102c79bbu);
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x102c715bu), g->eax, ecx, edx, 1, 5, arg1, t6, t5, in_edi, in_esi);
    t8 = g->edx;
    t9 = rd32(arg1 + 0x1cu);
    wr32(t9 + 0x14u, t7);
    if (rd32(rd32(arg1 + 0x1cu) + 0x14u) != 0u)
    {
        ecx = t9;
        edx = t8;
        goto L_102c3e71;
    }
    ecx = t9;
    edx = t8;
    loc_10 = 0xfffffffcu;
L_102c3e65: ;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x102c3d5fu), g->eax, ecx, edx, 1, 3, arg1, in_edi, in_esi);
    eax = loc_10;
    goto L_102c3e83;
L_102c3e71: ;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102c3d20u), 1, arg1);
    eax = 0u;
    goto L_102c3e83;
L_102c3e7c: ;
    loc_10 = 0xfffffffeu;
    goto L_102c3e65;
L_102c3e80: ;
    loc_10 = 0xfffffffau;
    goto L_102c3e82;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c3d9d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102c3d9d(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
