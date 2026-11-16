/* f_0x1014ca70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1014ca70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 112u);

    wr32(sp0 - 0x58u, in_esi);
    wr32(sp0 - 0x5cu, in_edi);
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_1014cb69;
    eax = rd32(COW_IMG(0x104dfd98u));
    if ((int32_t)arg1 <= 0) goto L_1014cb69;
    if ((int32_t)arg1 > 8) goto L_1014cb69;
    if (rd16(arg1 * 0x48u + eax + 0x2c9fcu) != 0xffffu) goto L_1014cb69;
    esi = arg1 * 0x48u + eax + 0x2c9dcu;
    if (rd32(esi + 0x28u) == 0u) goto L_1014cb69;
    eax = rd32(esi + 0x28u);
    if (eax > 0x3b9ac9ffu) goto L_1014cb69;
    wr32(sp0 - 0x60u, esi);
    g->ecx = arg1 * 9u;
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t1 = cow_cdecl(g, COW_IMG(0x1014ca20u), 1, esi);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t3;
        goto L_1014cb3a;
    }
    ecx = t2;
    if ((uint16_t)rd32(esi + 0x1cu) == 0u) goto L_1014cb69;
    eax = (uint16_t)rd32(esi + 0x1cu);
    ecx = rd8(esi + 0x1eu);
    if (eax >= 0xffffu) goto L_1014cb69;
    wr32(sp0 - 0x48u, arg1);
    wr32(sp0 - 0x40u, eax);
    wr32(sp0 - 0x3cu, ecx);
    t4 = rd32(esi + 0x28u);
    wr32(sp0 - 0x44u, t4);
    wr32(sp0 - 0x60u, sp0 - 0x54u);
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    return;
L_1014cb3a: ;
    wr32(sp0 - 0x48u, arg1);
    wr32(sp0 - 0x60u, 0xfu);
    wr32(sp0 - 0x64u, esi + 4u);
    wr32(sp0 - 0x68u, sp0 - 0x34u);
    t5 = rd32(esi + 0x28u);
    wr32(sp0 - 0x44u, t5);
    g->ecx = sp0 - 0x34u;
    g->esp = sp0 - 0x5cu;
    cow_call_regs(g, COW_IMG(0x10312090u), t5, g->ecx, g->edx, 1, 3, sp0 - 0x34u, esi + 4u, 0xfu);
    t6 = g->ecx;
    wr32(sp0 - 0x6cu, sp0 - 0x54u);
    g->esp = sp0 - 0x68u;
    cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
L_1014cb69: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014ca70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1014ca70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
