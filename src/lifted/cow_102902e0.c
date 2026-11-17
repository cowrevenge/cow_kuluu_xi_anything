/* f_0x102902e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102902e0(Guest* g)
{
    double d1;
    double d2;
    uint32_t eax;
    uint32_t ecx;
    uint32_t t3;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 276u);

    wr32(sp0 - 0x100u, 0xbf7cb3f6u);
    wr32(sp0 - 0xfcu, 0xba67ff58u);
    wr32(sp0 - 0xf8u, 0xbf489396u);
    wr32(sp0 - 0xf4u, 0xbf2c0757u);
    wr32(sp0 - 0xf0u, 0xbe31f96au);
    wr32(sp0 - 0xecu, 0x3eec2dcfu);
    wr32(sp0 - 0xe8u, 0xbf376b6eu);
    wr32(sp0 - 0xe4u, 0x3e925d29u);
    wr32(sp0 - 0xe0u, 0x3f6af7d3u);
    wr32(sp0 - 0xdcu, 0x3f77abebu);
    wr32(sp0 - 0xd8u, 0xbf1ae32eu);
    wr32(sp0 - 0xd4u, 0x3e13393bu);
    wr32(sp0 - 0xd0u, 0xbef54de8u);
    wr32(sp0 - 0xccu, 0x3ebb3d6cu);
    wr32(sp0 - 0xc8u, 0x3eb9dd7fu);
    wr32(sp0 - 0xc4u, 0xbf1a933au);
    wr32(sp0 - 0xc0u, 0x3eb8956cu);
    wr32(sp0 - 0xbcu, 0x3f5b5bb4u);
    wr32(sp0 - 0xb8u, 0xbf0b0718u);
    wr32(sp0 - 0xb4u, 0xbec31d93u);
    wr32(sp0 - 0xb0u, 0xbee24dd3u);
    wr32(sp0 - 0xacu, 0x3f07f716u);
    wr32(sp0 - 0xa8u, 0x3d352114u);
    wr32(sp0 - 0xa4u, 0x3f4be39fu);
    wr32(sp0 - 0xa0u, 0xbdcf31b1u);
    wr32(sp0 - 0x9cu, 0xbe3e3971u);
    wr32(sp0 - 0x98u, 0xbeff9df5u);
    wr32(sp0 - 0x94u, 0xbe22c94bu);
    wr32(sp0 - 0x90u, 0x3f06b713u);
    wr32(sp0 - 0x8cu, 0x3f230f49u);
    wr32(sp0 - 0x88u, 0x3f7417ecu);
    wr32(sp0 - 0x84u, 0u);
    eax = 0u;
    ecx = arg2 * 0x2cu + rd32(arg1 + 0x48u);
    x0 = (double)rdf32(arg2 * 0x2cu + rd32(arg1 + 0x48u));
L_10290408: ;
    d1 = fr(g, x0 * (double)rdf32(eax + sp0 - 0x100u));
    wrf32(eax + sp0 - 0x80u, (float)d1);
    d2 = fr(g, x0 * (double)rdf32(eax + sp0 - 0xfcu));
    wrf32(eax + sp0 - 0x7cu, (float)d2);
    if ((int32_t)(eax + 8u) < 128)
    {
        eax = eax + 8u;
        goto L_10290408;
    }
    eax = eax + 8u;
    t3 = rd32(ecx + 0x10u);
    wr32(sp0 - 0x104u, t3);
    wr32(sp0 - 0x108u, sp0 - 0x80u);
    wr32(sp0 - 0x10cu, t3);
    wrf32(sp0 - 0x10cu, (float)(double)(float)(double)(int32_t)t3);
    wr32(sp0 - 0x110u, t3);
    g->esp = sp0 - 0x108u;
    cow_cdecl(g, COW_IMG(0x102813d0u), 2, t3, cow_f2bits((double)(float)(double)(int32_t)t3));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102902e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102902e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
