/* f_0x10307df6 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10307df6(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edi = g->edi;

    t1 = rd32(in_edi + 0x1a4u);
    if ((int32_t)rd32(in_edi + 0x64u) > 0)
    {
        edx = t1;
        loc_18 = t1;
        ecx = edx + 0x34u;
        loc_8 = 0u;
        loc_10 = edx + 0x34u;
L_10307e1b: ;
        if ((int32_t)loc_8 <= 0)
        {
            esi = rd32(ecx - 0x14u);
            goto L_10307e3f;
        }
        esi = rd32(ecx - 0x14u);
        eax = 0u;
        ebx = edx + 0x20u;
L_10307e28: ;
        if (esi == rd32(ebx)) goto L_10307e37;
        if ((int32_t)(eax + 1u) < (int32_t)loc_8)
        {
            eax = eax + 1u;
            ebx = ebx + 4u;
            goto L_10307e28;
        }
L_10307e3f: ;
        g->eax = rd32(in_edi + 4u);
        t2 = rd32(in_edi + 4u);
        g->esp = sp0 - 0x2cu;
        t3 = cow_thiscall(g, rd32(t2), ecx, 0);
        t4 = (esi << 9u) - 0x200u;
        ecx = t3;
        ebx = t4;
        loc_14 = t3;
        loc_c = COW_IMG(0x10349450u);
L_10307e66: ;
        esi = 0u;
L_10307e68: ;
        t5 = cow_divs(g, 0xfe01u - rd8(esi + loc_c) * 0x1feu, ebx);
        t6 = cow_mods(g, 0xfe01u - rd8(esi + loc_c) * 0x1feu, ebx);
        wr32(ecx, t5);
        if ((int32_t)(esi + 1u) < 16)
        {
            ecx = ecx + 4u;
            esi = esi + 1u;
            goto L_10307e68;
        }
        ecx = ecx + 4u;
        if ((int32_t)(loc_c + 0x10u) < (int32_t)COW_IMG(0x10349550u))
        {
            loc_c = loc_c + 0x10u;
            goto L_10307e66;
        }
        eax = loc_14;
        ecx = loc_10;
        edx = loc_18;
L_10307ea0: ;
        wr32(ecx, eax);
        if ((int32_t)(loc_8 + 1u) < (int32_t)rd32(in_edi + 0x64u))
        {
            loc_8 = loc_8 + 1u;
            loc_10 = ecx + 4u;
            ecx = ecx + 4u;
            goto L_10307e1b;
        }
    }
    return;
L_10307e37: ;
    if (rd32(eax * 4u + edx + 0x34u) != 0u)
    {
        eax = rd32(eax * 4u + edx + 0x34u);
        goto L_10307ea0;
    }
    goto L_10307e3f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10307df6(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10307df6(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
