/* f_0x102abdc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102abdc0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x10u, in_esi);
    eax = 0u;
    ecx = rd32(sp0 + 0xcu) - (sp0 - 0xcu);
L_102abdda: ;
    t1 = rd32(eax * 4u + ecx + sp0 - 0xcu);
    wr32(eax * 4u + sp0 - 0xcu, t1);
    wr32(arg1 + eax * 4u, 0xffffffffu);
    if ((int32_t)(eax + 1u) < 3)
    {
        eax = eax + 1u;
        goto L_102abdda;
    }
    if (rd32(sp0 - 0xcu) != rd32(sp0 - 8u))
    {
        ecx = rd32(sp0 - 0xcu);
        edx = rd32(sp0 - 8u);
        if (ecx != rd32(sp0 - 4u))
        {
            eax = rd32(sp0 - 4u);
            if (edx != eax)
            {
                wr32(sp0 - 0x14u, in_ebx);
                wr32(sp0 - 0x18u, in_ebp);
                wr32(sp0 - 0x1cu, in_edi);
                eax = 0u;
L_102abe23: ;
                t2 = rd32(eax * 4u + sp0 - 0xcu);
                wr32(sp0 + 0xcu, eax + 1u);
                t3 = cow_divs(g, eax + 1u, 3u);
                t4 = cow_mods(g, eax + 1u, 3u);
                if ((int32_t)t2 >= (int32_t)rd32(sp0 + t4 * 4u - 0xcu))
                {
                    eax = t3;
                    ecx = t2;
                    edx = rd32(sp0 + t4 * 4u - 0xcu);
                    ebp = ecx;
                    edi = edx;
                }
                else
                {
                    eax = t3;
                    ecx = t2;
                    edx = rd32(sp0 + t4 * 4u - 0xcu);
                    ebp = edx;
                    edi = ecx;
                }
                if (rd32(arg4 + edi * 4u) == 0u) goto L_102abe59;
                esi = rd32(arg4 + edi * 4u);
L_102abe4d: ;
                if (rd32(esi + 8u) == ebp) goto L_102abe7e;
                if (rd32(esi + 0xcu) != 0u)
                {
                    esi = rd32(esi + 0xcu);
                    goto L_102abe4d;
                }
L_102abe59: ;
                wr32(sp0 - 0x20u, 0x363u);
                wr32(sp0 - 0x24u, COW_IMG(0x103be980u));
                wr32(sp0 - 0x28u, 0x10u);
                wr32(sp0 - 0x2cu, 1u);
                g->esp = sp0 - 8u;
                t5 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, 0x10u, COW_IMG(0x103be980u), 0x363u, in_edi, in_ebp, in_ebx, in_esi, rd32(sp0 - 0xcu));
                if (rd32(arg4 + edi * 4u) != 0u)
                {
                    eax = t5;
                    ecx = rd32(arg4 + edi * 4u);
                    wr32(eax + 0xcu, ecx);
                    wr32(arg4 + edi * 4u, eax);
                }
                else
                {
                    eax = t5;
                    ecx = rd32(arg4 + edi * 4u);
                    wr32(arg4 + edi * 4u, eax);
                    wr32(eax + 0xcu, ecx);
                }
                wr32(eax + 4u, 0xffffffffu);
                wr32(eax, arg2);
                wr32(eax + 8u, ebp);
L_102abeb0: ;
                if ((int32_t)rd32(sp0 + 0xcu) < 3)
                {
                    eax = rd32(sp0 + 0xcu);
                    goto L_102abe23;
                }
            }
        }
    }
    return;
L_102abe7e: ;
    if (rd32(esi + 4u) != 0xffffffffu)
    {
        wr32(sp0 - 0x20u, COW_IMG(0x103beb18u));
        g->esp = sp0 - 0x18u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103beb18u), in_edi);
    }
    wr32(esi + 4u, arg2);
    goto L_102abeb0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102abdc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102abdc0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
