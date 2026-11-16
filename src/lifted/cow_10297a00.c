/* f_0x10297a00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=11 */
void cow_fn_10297a00(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    int64_t q1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg10 = rd32(g->esp + 0x28u);
    const uint32_t arg11 = rd32(g->esp + 0x2cu);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 84u);

    q1 = (int64_t)cow_muls(0x55555556u, rd32(sp0 + 4u));
    if ((int32_t)(cow_qhi(q1) + (cow_qhi(q1) >> 0x1fu)) > 0)
    {
        edx = cow_qhi(q1) + (cow_qhi(q1) >> 0x1fu);
        wr32(sp0 - 0x28u, in_ebx);
        wr32(sp0 - 0x2cu, in_ebp);
        wr32(sp0 - 0x30u, in_esi);
        wr32(sp0 - 0x34u, in_edi);
        wr32(sp0 + 4u, edx);
        ebp = arg6 + arg2 * 0xcu + 8u;
        esi = arg5 + arg3 * 4u + 4u;
        edi = arg7 + arg2 * 4u;
L_10297a4d: ;
        if (rd32(ebp - 8u) != 0xffffffffu)
        {
            eax = rd32(ebp - 8u);
            edx = rd32(arg7 + eax * 4u);
        }
        else
        {
            edx = rd32(edi) == 0u;
        }
        if (rd32(ebp - 4u) != 0xffffffffu)
        {
            eax = rd32(ebp - 4u);
            ecx = rd32(arg7 + eax * 4u);
        }
        else
        {
            ecx = rd32(edi) == 0u;
        }
        if (rd32(ebp) != 0xffffffffu)
        {
            eax = rd32(ebp);
            eax = rd32(arg7 + eax * 4u);
        }
        else
        {
            eax = rd32(edi) == 0u;
        }
        wr32(sp0 - 4u, eax);
        if (rd32(edi) == 0u)
        {
            loc_4 = eax;
            eax = rd32(edi);
            goto L_10297ab3;
        }
        loc_4 = eax;
        eax = rd32(edi);
        wr32(sp0 - 0x24u, edx);
        t2 = rd32(esi - 4u);
        wr32(sp0 - 0x18u, t2);
        wr32(sp0 - 0x14u, rd32(esi));
        wr32(sp0 - 0x20u, ecx);
        ebx = rd32(esi + 4u);
L_10297ad3: ;
        wr32(sp0 - 0x1cu, loc_4);
        wr32(sp0 - 0x38u, arg10);
        wr32(sp0 - 0x3cu, arg9);
        wr32(sp0 - 0x40u, arg8);
        wr32(sp0 - 0x44u, sp0 - 0x24u);
        wr32(sp0 - 0x48u, eax);
        wr32(sp0 - 0x10u, ebx);
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        wr32(sp0 - 0x50u, arg4);
        g->esp = sp0 - 0x34u;
        cow_cdecl(g, COW_IMG(0x10297550u), 7, arg4, sp0 - 0x18u, eax, sp0 - 0x24u, arg8, arg9, arg10);
L_10297b06: ;
        t4 = rd32(sp0 + 4u) - 1u;
        t5 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t4);
        if (t5 != 1u)
        {
            ebp = ebp + 0xcu;
            esi = esi + 0xcu;
            edi = edi + 4u;
            goto L_10297a49;
        }
    }
    return;
L_10297a49: ;
    goto L_10297a4d;
L_10297ab3: ;
    if (arg11 != 0u) goto L_10297b06;
    wr32(sp0 - 0x24u, ecx);
    t3 = rd32(esi + 4u);
    wr32(sp0 - 0x18u, t3);
    wr32(sp0 - 0x14u, rd32(esi));
    wr32(sp0 - 0x20u, edx);
    ebx = rd32(esi - 4u);
    goto L_10297ad3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10297a00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10297a00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
